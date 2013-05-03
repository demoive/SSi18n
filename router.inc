<!--
Copyright....
Generated with SSIS
http://github.com/demoive/...
COOL ASCII GRAPHIC
-->

<!-- CONFIGURE ENVIRONMENT PARAMETERS -->
<!--#config errmsg="<!-- Error. Contact: info@labandsambant.com -->" -->
<!--#config timefmt="%d/%m/%y" -->
<!--#config sizefmt="abbrev" -->



<!-- NOT WORKING -->
<!-- debug = true, silent, false -->
<!--#set var="debug" value="true" -->
<!--#set var="errmsg_custom" value="Error. Contact: info@labandsambant.com" -->
<!--#if expr="$debug == true" -->
  <!--#config errmsg="[${errmsg_custom}]" -->
<!--#else -->
  <!--#config errmsg="<!-- ${errmsg_custom} -->" -->
<!--#endif -->







<!-- extract the hash, hostname, port, protocol -->
<!-- rename route to ssis_pathname and query to ssis_search? lang to lbs_lang -->


<!-- EXTRACT INFORMATION FROM THE URL -->
<!--#if expr="$REQUEST_URI == /^(?:\/([a-z]{2}))?(\/[0-9a-zA-Z|\.,~_\/-]*)?([?].*)?$/" -->
  <!--#set var="lang" value="$1" -->
  <!--#set var="route" value="$2" -->
  <!--#set var="query" value="$3" -->
<!--#endif -->

<!-- SETS THE DEFAULT VALUES IF THEY WEREN'T FOUND IN THE URL -->
<!--#if expr="$lang == ''" -->
  <!--#set var="lang" value="en" -->
<!--#endif -->


<!--#set var="site-name" value="La BandSambant" -->
<!--#set var="site-description_en" value="Afro-Brazilian percussion group" -->
<!--#set var="site-description_ca" value="Grup de percussió afro-brasilenya" -->
<!--#set var="site-description_es" value="Grupo de percussion afro-brasile&ntilde;a" -->

<!--#if expr="$route == /^\/agenda\/?$/       " --><!--#set var="path" value="1-0" --><!--#endif -->
<!--#if expr="$route == /^\/agenda\/sub1\/?$/ " --><!--#set var="path" value="1-1" --><!--#endif -->
<!--#if expr="$route == /^\/agenda\/sub2\/?$/ " --><!--#set var="path" value="1-2" --><!--#endif -->
<!--#if expr="$route == /^\/banda\/?$/        " --><!--#set var="path" value="2-0" --><!--#endif -->
<!--#if expr="$route == /^\/agenda\/sub1\/?$/ " --><!--#set var="path" value="2-1" --><!--#endif -->



<!--MIGHT NOT NEED THIS CONDITION HERE IF IT'S TAKEN CARE OF IN .HTACCESS-->
<!--OR MAYBE THE CONDITION NEEDS TO BE WITH THE HTTP_STATUS-->
<!-- Setup complete. Bootstrap the template -->
<!--#if expr="$path == ''" -->
  <!--#include virtual="/includes/404_html.inc" -->
<!--#else -->
  <!--#include virtual="/includes/200_html.inc" -->
<!--#endif -->
















<!-- regex trials -->
<!-- v5 = ^(?:\/([a-z]{2}))?(\/[0-9a-zA-Z/~\._-]*)?(\?.*)?$ -->
<!-- v4 = ^\/(?:(en|es|ca)\/)?(.*)[\\?]? -->
<!-- v3 = ^\/(?:(en|es|ca)\/|\?)?([0-9a-zA-Z/~\._-]*)?(\?.*)?$ -->
<!-- v2 = ^\/([a-z]{2})(\/|.*) -->
<!-- v1 = ^\/(en|es|ca)(\/|.*) -->
<!-- lang=$1\nroute=$2\nquery=$3\n -->
<!-- /es/barcelona/apartments/?param=1 -->
<!-- /es/sdfd -->
<!-- /espectacular/ -->
<!-- /english -->
<!-- /es? -->
<!-- /ca -->
<!-- /de?sdf -->








<!--
<!--#_printenv -->
<!--#//printenv -->
<!--#printenv -->

<!--
<!--#set var="DATE_GMT" value="DATE_GMT=${DATE_GMT}" --><!--#echo var="DATE_GMT" -->
<!--#set var="DATE_LOCAL" value="DATE_LOCAL=${DATE_LOCAL}" --><!--#echo var="DATE_LOCAL" -->
<!--#set var="DOCUMENT_NAME" value="DOCUMENT_NAME=${DOCUMENT_NAME}" --><!--#echo var="DOCUMENT_NAME" -->
<!--#set var="DOCUMENT_PATH_INFO" value="DOCUMENT_PATH_INFO=${DOCUMENT_PATH_INFO}" --><!--#echo var="DOCUMENT_PATH_INFO" -->
<!--#set var="DOCUMENT_ROOT" value="DOCUMENT_ROOT=${DOCUMENT_ROOT}" --><!--#echo var="DOCUMENT_ROOT" -->
<!--#set var="DOCUMENT_URI" value="DOCUMENT_URI=${DOCUMENT_URI}" --><!--#echo var="DOCUMENT_URI" -->
<!--#set var="GATEWAY_INTERFACE" value="GATEWAY_INTERFACE=${GATEWAY_INTERFACE}" --><!--#echo var="GATEWAY_INTERFACE" -->
<!--#set var="HTTP_ACCEPT" value="HTTP_ACCEPT=${HTTP_ACCEPT}" --><!--#echo var="HTTP_ACCEPT" -->
<!--#set var="HTTP_ACCEPT_CHARSET" value="HTTP_ACCEPT_CHARSET=${HTTP_ACCEPT_CHARSET}" --><!--#echo var="HTTP_ACCEPT_CHARSET" -->
<!--#set var="HTTP_ACCEPT_ENCODING" value="HTTP_ACCEPT_ENCODING=${HTTP_ACCEPT_ENCODING}" --><!--#echo var="HTTP_ACCEPT_ENCODING" -->
<!--#set var="HTTP_ACCEPT_LANGUAGE" value="HTTP_ACCEPT_LANGUAGE=${HTTP_ACCEPT_LANGUAGE}" --><!--#echo var="HTTP_ACCEPT_LANGUAGE" -->
<!--#set var="HTTP_CACHE_CONTROL" value="HTTP_CACHE_CONTROL=${HTTP_CACHE_CONTROL}" --><!--#echo var="HTTP_CACHE_CONTROL" -->
<!--#set var="HTTP_CONNECTION" value="HTTP_CONNECTION=${HTTP_CONNECTION}" --><!--#echo var="HTTP_CONNECTION" -->
<!--#set var="HTTP_COOKIE" value="HTTP_COOKIE=${HTTP_COOKIE}" --><!--#echo var="HTTP_COOKIE" -->
<!--#set var="HTTP_HOST" value="HTTP_HOST=${HTTP_HOST}" --><!--#echo var="HTTP_HOST" -->
<!--#set var="HTTP_IF_MODIFIED_SINCE" value="HTTP_IF_MODIFIED_SINCE=${HTTP_IF_MODIFIED_SINCE}" --><!--#echo var="HTTP_IF_MODIFIED_SINCE" -->
<!--#set var="HTTP_REFERER" value="HTTP_REFERER=${HTTP_REFERER}" --><!--#echo var="HTTP_REFERER" -->
<!--#set var="HTTP_USER_AGENT" value="HTTP_USER_AGENT=${HTTP_USER_AGENT}" --><!--#echo var="HTTP_USER_AGENT" -->
<!--#set var="HTTP_X_FORWARDED_FOR" value="HTTP_X_FORWARDED_FOR=${HTTP_X_FORWARDED_FOR}" --><!--#echo var="HTTP_X_FORWARDED_FOR" -->
<!--#set var="LAST_MODIFIED" value="LAST_MODIFIED=${LAST_MODIFIED}" --><!--#echo var="LAST_MODIFIED" -->
<!--#set var="PATH" value="PATH=${PATH}" --><!--#echo var="PATH" -->
<!--#set var="QUERY_STRING" value="QUERY_STRING=${QUERY_STRING}" --><!--#echo var="QUERY_STRING" -->
<!--#set var="QUERY_STRING_UNESCAPED" value="QUERY_STRING_UNESCAPED=${QUERY_STRING_UNESCAPED}" --><!--#echo var="QUERY_STRING_UNESCAPED" -->
<!--#set var="REMOTE_ADDR" value="REMOTE_ADDR=${REMOTE_ADDR}" --><!--#echo var="REMOTE_ADDR" -->
<!--#set var="REMOTE_PORT" value="REMOTE_PORT=${REMOTE_PORT}" --><!--#echo var="REMOTE_PORT" -->
<!--#set var="REQUEST_METHOD" value="REQUEST_METHOD=${REQUEST_METHOD}" --><!--#echo var="REQUEST_METHOD" -->
<!--#set var="REQUEST_URI" value="REQUEST_URI=${REQUEST_URI}" --><!--#echo var="REQUEST_URI" -->
<!--#set var="SCRIPT_FILENAME" value="SCRIPT_FILENAME=${SCRIPT_FILENAME}" --><!--#echo var="SCRIPT_FILENAME" -->
<!--#set var="SCRIPT_NAME" value="SCRIPT_NAME=${SCRIPT_NAME}" --><!--#echo var="SCRIPT_NAME" -->
<!--#set var="SCRIPT_URI" value="SCRIPT_URI=${SCRIPT_URI}" --><!--#echo var="SCRIPT_URI" -->
<!--#set var="SCRIPT_URL" value="SCRIPT_URL=${SCRIPT_URL}" --><!--#echo var="SCRIPT_URL" -->
<!--#set var="SERVER_ADDR" value="SERVER_ADDR=${SERVER_ADDR}" --><!--#echo var="SERVER_ADDR" -->
<!--#set var="SERVER_ADMIN" value="SERVER_ADMIN=${SERVER_ADMIN}" --><!--#echo var="SERVER_ADMIN" -->
<!--#set var="SERVER_NAME" value="SERVER_NAME=${SERVER_NAME}" --><!--#echo var="SERVER_NAME" -->
<!--#set var="SERVER_PORT" value="SERVER_PORT=${SERVER_PORT}" --><!--#echo var="SERVER_PORT" -->
<!--#set var="SERVER_PROTOCOL" value="SERVER_PROTOCOL=${SERVER_PROTOCOL}" --><!--#echo var="SERVER_PROTOCOL" -->
<!--#set var="SERVER_SIGNATURE" value="SERVER_SIGNATURE=${SERVER_SIGNATURE}" --><!--#echo var="SERVER_SIGNATURE" -->
<!--#set var="SERVER_SOFTWARE" value="SERVER_SOFTWARE=${SERVER_SOFTWARE}" --><!--#echo var="SERVER_SOFTWARE" -->
<!--#set var="UNIQUE_ID" value="UNIQUE_ID=${UNIQUE_ID}" --><!--#echo var="UNIQUE_ID" -->
<!--#set var="USER_NAME" value="USER_NAME=${USER_NAME}" --><!--#echo var="USER_NAME" -->
-->