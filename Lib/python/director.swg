/* -----------------------------------------------------------------------------
 * See the LICENSE file for information on copyright, usage and redistribution
 * of SWIG, and the README file for authors - http://www.swig.org/release.html.
 *
 * director.swg
 *
 * This file contains support for director classes that proxy
 * method calls from C++ to Python extensions.
 * ----------------------------------------------------------------------------- */

#ifdef __cplusplus

namespace Swig {

  GCItem::~GCItem()
  {
  }
  
  /* simple thread abstraction for pthreads on win32 */
  Director::~Director() {
    swig_decref(); 
  }

  /* wrap a python object, optionally taking ownership */
  Director::Director(PyObject* self) : swig_self(self), swig_disown_flag(false) {
    swig_incref();
  }



  bool Director::swig_up = false;

#ifdef __PTHREAD__
  pthread_mutex_t SWIG_MUTEX_INIT(Director::swig_mutex_up);
  pthread_mutex_t SWIG_MUTEX_INIT(Director::swig_mutex_own);
  pthread_t Director::swig_mutex_thread;
  bool Director::swig_mutex_active = false;
#endif


  void UnknownExceptionHandler::handler()  {
    try {
      throw;
    } catch (DirectorException& e) {
      std::cerr << "Swig Director exception caught:" << std::endl
                << e.getMessage() << std::endl;
    } catch (std::exception& e) {
      std::cerr << "std::exception caught: "<< e.what() << std::endl;
    } catch (...) {
      std::cerr << "Unknown exception caught." << std::endl;
    }

    std::cerr << std::endl
    	      << "Python interpreter traceback:" << std::endl;
    PyErr_Print();
    std::cerr << std::endl;

    std::cerr << "This exception was caught by the SWIG unexpected exception handler." << std::endl
              << "Try using %feature(\"director:except\") to avoid reaching this point." << std::endl
	      << std::endl
              << "Exception is being re-thrown, program will like abort/terminate." << std::endl;
    throw;
  }

}

#endif /* __cplusplus */

