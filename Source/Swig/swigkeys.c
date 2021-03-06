/* -----------------------------------------------------------------------------
 * See the LICENSE file for information on copyright, usage and redistribution
 * of SWIG, and the README file for authors - http://www.swig.org/release.html.
 *
 * swigkeys.c
 * ----------------------------------------------------------------------------- */

char cvsroot_keys_c[] = "$Header: /cvsroot/swig/SWIG/Source/Swig/swigkeys.c,v 1.9 2006/03/06 22:51:00 wsfulton Exp $";

#include "swigkeys.h"

String *empty_string = 0;
String *k_1 = 0;
String *k_SWIGTYPE = 0;
String *k_abstract = 0;
String *k_access = 0;
String *k_alias = 0;
String *k_allowstypedef = 0;
String *k_alttype = 0;
String *k_argbyname = 0;
String *k_attrlist = 0;
String *k_baselist = 0;
String *k_bases = 0;
String *k_cdecl = 0;
String *k_class = 0;
String *k_classforward = 0;
String *k_classname = 0;
String *k_cplusstaticbase = 0;
String *k_code = 0;
String *k_coloncolon = 0;
String *k_compactdefargs = 0;
String *k_construct = 0;
String *k_constructor = 0;
String *k_continue = 0;
String *k_conversionoperator = 0;
String *k_copy = 0;
String *k_csymnextSibling = 0;
String *k_csympreviousSibling = 0;
String *k_csymtab = 0;
String *k_decl = 0;
String *k_default = 0;
String *k_defaultargs = 0;
String *k_destroy = 0;
String *k_destructor = 0;
String *k_director = 0;
String *k_directorbase = 0;
String *k_directorprefixargs = 0;
String *k_disown = 0;
String *k_emitonly = 0;
String *k_enumitem = 0;
String *k_error = 0;
String *k_extern = 0;
String *k_fragment = 0;
String *k_friend = 0;
String *k_fullname = 0;
String *k_get = 0;
String *k_hidden = 0;
String *k_ignore = 0;
String *k_inherit = 0;
String *k_kwargs = 0;
String *k_lname = 0;
String *k_locals = 0;
String *k_kind = 0;
String *k_match = 0;
String *k_matchlist = 0;
String *k_member = 0;
String *k_name = 0;
String *k_namespace = 0;
String *k_nodetype = 0;
String *k_notmatch = 0;
String *k_parent = 0;
String *k_parentnode = 0;
String *k_parm = 0;
String *k_parms = 0;
String *k_partialarg = 0;
String *k_partialargs = 0;
String *k_partials = 0;
String *k_pattern = 0;
String *k_pname = 0;
String *k_privatebaselist = 0;
String *k_protectedbaselist = 0;
String *k_public = 0;
String *k_qname = 0;
String *k_qualifier = 0;
String *k_rxsmatch = 0;
String *k_rxstarget = 0;
String *k_rename = 0;
String *k_result = 0;
String *k_scope = 0;
String *k_section = 0;
String *k_self = 0;
String *k_set = 0;
String *k_sourcefmt = 0;
String *k_start = 0;
String *k_static = 0;
String *k_storage = 0;
String *k_symboltable = 0;
String *k_symname = 0;
String *k_symnextSibling = 0;
String *k_symoverloaded = 0;
String *k_symovername = 0;
String *k_sympreviousSibling = 0;
String *k_symsymtab = 0;
String *k_symtab = 0;
String *k_symtypename = 0;
String *k_symweak = 0;
String *k_sysdir = 0;
String *k_targetfmt = 0;
String *k_targetname = 0;
String *k_template = 0;
String *k_templateparm = 0;
String *k_templateparms = 0;
String *k_templatetype = 0;
String *k_throw = 0;
String *k_throws = 0;
String *k_tmapmatch = 0;
String *k_type = 0;
String *k_typemap = 0;
String *k_typedef = 0;
String *k_typetab = 0;
String *k_uname = 0;
String *k_unnamed = 0;
String *k_using = 0;
String *k_value = 0;
String *k_view = 0;
String *k_virtual = 0;
String *k_vtable = 0;
String *k_wrapaction = 0;
String *k_wrapcode = 0;
String *k_wrapdirectormap = 0;
String *k_wrapdisown = 0;
String *k_wrapper = 0;

String *k_previoussibling = 0;
String *k_nextsibling = 0;
String *k_firstchild = 0;
String *k_lastchild = 0;

void Swig_keys_init() {
  empty_string = NewString("");
  k_1 = NewString("1");
  k_SWIGTYPE = NewString("SWIGTYPE");
  k_abstract = NewString("abstract");
  k_access = NewString("access");
  k_alias = NewString("alias");
  k_allowstypedef = NewString("allows_typedef");
  k_alttype = NewString("alttype");
  k_argbyname = NewString("arg:byname");
  k_attrlist = NewString("attrlist");
  k_baselist = NewString("baselist");
  k_bases = NewString("bases");
  k_cdecl = NewString("cdecl");
  k_class = NewString("class");
  k_classforward = NewString("classforward");
  k_classname = NewString("classname");
  k_cplusstaticbase = NewString("cplus:staticbase");;
  k_code = NewString("code");
  k_coloncolon = NewString("::");
  k_compactdefargs = NewString("compactdefargs");
  k_construct = NewString("construct");
  k_constructor = NewString("constructor");
  k_continue = NewString("continue");
  k_conversionoperator = NewString("conversion_operator");
  k_copy = NewString("copy");
  k_csymnextSibling = NewString("csym:nextSibling");
  k_csympreviousSibling = NewString("csym:previousSibling");
  k_csymtab = NewString("csymtab");
  k_decl = NewString("decl");
  k_default = NewString("default");
  k_defaultargs = NewString("defaultargs");
  k_destroy = NewString("destroy");
  k_destructor = NewString("destructor");
  k_director = NewString("director");
  k_directorbase = NewString("directorBase");
  k_directorprefixargs = NewString("director:prefix_args");
  k_disown = NewString("disown");
  k_emitonly = NewString("emitonly");
  k_enumitem = NewString("enumitem");
  k_error = NewString("error");
  k_fragment = NewString("fragment");
  k_friend = NewString("friend");
  k_fullname = NewString("fullname");
  k_get = NewString("get");
  k_hidden = NewString("hidden");
  k_ignore = NewString("ignore");
  k_inherit = NewString("inherit");
  k_kwargs = NewString("kwargs");
  k_lname = NewString("lname");
  k_locals = NewString("locals");
  k_kind = NewString("kind");
  k_match = NewString("match");
  k_matchlist = NewString("matchlist");
  k_member = NewString("member");
  k_name = NewString("name");
  k_namespace = NewString("namespace");
  k_nodetype = NewString("nodeType");
  k_notmatch = NewString("notmatch");
  k_parent = NewString("parent");
  k_parentnode = NewString("parentNode");
  k_parm = NewString("parm");
  k_parms = NewString("parms");
  k_partialarg = NewString("partialarg");
  k_partialargs = NewString("partialargs");
  k_partials = NewString("partials");
  k_pattern = NewString("pattern");
  k_pname = NewString("pname");
  k_privatebaselist = NewString("privatebaselist");
  k_protectedbaselist = NewString("protectedbaselist");
  k_public = NewString("public");
  k_qname = NewString("qname");
  k_qualifier = NewString("qualifier");
  k_rxsmatch = NewString("rxsmatch");
  k_rxstarget = NewString("rxstarget");
  k_rename = NewString("rename");
  k_result = NewString("result");
  k_scope = NewString("scope");
  k_section = NewString("section");
  k_self = NewString("self");
  k_set = NewString("set");
  k_sourcefmt = NewString("sourcefmt");
  k_start = NewString("*");
  k_static = NewString("static");
  k_storage = NewString("storage");
  k_symboltable = NewString("symboltable");
  k_symname = NewString("sym:name");
  k_symnextSibling = NewString("sym:nextSibling");
  k_symoverloaded = NewString("sym:overloaded");
  k_symovername = NewString("sym:overname");
  k_sympreviousSibling = NewString("sym:previousSibling");
  k_symsymtab = NewString("sym:symtab");
  k_symtab = NewString("symtab");
  k_symtypename = NewString("sym:typename");
  k_symweak = NewString("sym:weak");
  k_sysdir = NewString("sysdir");
  k_targetfmt = NewString("targetfmt");
  k_targetname = NewString("targetname");
  k_template = NewString("template");
  k_templateparm = NewString("templateparm");
  k_templateparms = NewString("templateparms");
  k_templatetype = NewString("templatetype");
  k_throw = NewString("throw");
  k_throws = NewString("throws");
  k_tmapmatch = NewString("tmap:match");
  k_type = NewString("type");
  k_typemap = NewString("typemap");
  k_typedef = NewString("typedef");
  k_typetab = NewString("typetab");
  k_uname = NewString("uname");
  k_unnamed = NewString("unnamed");
  k_using = NewString("using");
  k_value = NewString("value");
  k_view = NewString("view");
  k_virtual = NewString("virtual");
  k_vtable = NewString("vtable");
  k_wrapaction = NewString("wrap:action");
  k_wrapcode = NewString("wrap:code");
  k_wrapdirectormap = NewString("wrap:directormap");
  k_wrapdisown = NewString("wrap:disown");
  k_wrapper = NewString("wrapper");


  k_previoussibling = NewString("previousSibling");
  k_nextsibling = NewString("nextSibling");
  k_firstchild = NewString("firstChild");  
  k_lastchild =	NewString("lastChild");
}
