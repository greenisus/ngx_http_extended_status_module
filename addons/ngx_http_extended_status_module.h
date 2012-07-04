
#define  HTML_HEADER      "{"

#define  HTML_TAIL        "}"

#define  SAVE_THIS_PAGE   "<input type=button onclick=javascript:saveCurrentState() value=\"Save this page\"><br><br>\n"

// #define  SERVER_INFO      "<h1> Nginx Server Status for %s</h1>\n<dl><dt>Server Version: Nginx/%s </dt></dl>\n"
#define  SERVER_INFO      "'hostname': '%s', 'version': '%s', "


#define  WORKER_TABLE_HEADER   "<br><br>\n<table border=0><tr><th>Worker</th><th>PID</th><th>Acc</th><th>Mode</th><th>CPU</th>" \
                               "<th>Mbytes</th></tr>\n" 

#define  CURRENT_TIME          "<script type=text/javascript> var date = new Date() ; document.write( date.toLocaleString() );</script>"

#define  CONNECTION_TABLE_HEADER     "<br><br>\n<table class=sortable-onload-%s cellspacing=1 border=0 cellpadding=1>\n" \
                               "<thead><tr><th class=sortable>Worker</th><th class=sortable>Acc</th><th class=sortable>M</th>\n" \
                               "<th class=sortable>Bytes</th><th class=sortable>Client</th><th class=sortable>VHost</th>\n" \
                               "<th class=sortable>Gzip Ratio</th><th class=sortable>SS</th><th class=sortable>Status</th>\n" \
                               "<th class=sortable>TIME</th><th class=sortable>Proxy TIME</th><th class=sortable>Request</th></tr></thead><tbody>\n"

#define  GZIP_HEADER    "<th class=sortable>Gzip Ratio</th>"
#define  PROXY_HEADER   "<th class=sortable>Proxy TIME</th>"

#define  SHORTENED_TABLE  "<table>\n"  \
                     "<tr><th>PID</th><td>OS process ID</td></tr>\n" \
                     "<tr><th>Acc</th><td>Number of requests serviced with this connection slot</td></tr>\n" \
                     "<tr><th>M</th><td>Mode of operation</td></tr>\n" \
                     "<tr><th>CPU</th><td>Accumulated CPU usage in seconds</td></tr>\n" \
                     "<tr><th>Gzip Ratio</th><td>Ratio of original size to compressed size </td>\n" \
                     "<tr><th>SS</th><td>Seconds since the request completion</td></tr>\n" \
                     "<tr><th>Proxy TIME</th><td> Proxy response time in milliseconds. 0 means the value is less than 1 millisecond</td></tr>\n" \
                     "<tr><th>TIME</th><td>Response time in milliseconds. 0 means the value is less than 1 millisecond</td></tr>\n" \
                     "</table>\n" 

#define  MODE_LIST  "<b>Mode List</b><br><table>" \
                    "<tr><th>-</th><td>Waiting for request</td></tr>\n" \
                    "<tr><th>R</th><td>Reading request</td></tr>\n" \
                    "<tr><th>W</th><td>Sending reply</td></tr>\n" \
                    "<tr><th>L</th><td>Logging</td></tr>\n" \
                    "<tr><th>I</th><td>Inactive connection</td></tr>\n"


#define  MBYTE  1048576.0

#define  DEFAULT_REQ_VALUE    0

#define  MIN_REFRESH_VALUE    0
#define  MAX_REFRESH_VALUE   60

#define  PERIOD_S     10    /* 10 seconds */
#define  PERIOD_L     60    /* 60 seconds */


