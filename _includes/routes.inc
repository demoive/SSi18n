<!--#set var="ssis.route.code" value="0-0" -->

<!--#if expr="${ssis.route} == /^\/section1\/?$/               " --><!--#set var="ssis.route.code" value="1-0" --><!--#endif -->
<!--#if expr="${ssis.route} == /^\/section1\/sub-section1\/?$/ " --><!--#set var="ssis.route.code" value="1-1" --><!--#endif -->
<!--#if expr="${ssis.route} == /^\/section1\/sub-section2\/?$/ " --><!--#set var="ssis.route.code" value="1-2" --><!--#endif -->

<!--#if expr="${ssis.route} == /^\/section2\/?$/               " --><!--#set var="ssis.route.code" value="2-0" --><!--#endif -->
<!--#if expr="${ssis.route} == /^\/section2\/sub-section1\/?$/ " --><!--#set var="ssis.route.code" value="2-1" --><!--#endif -->
