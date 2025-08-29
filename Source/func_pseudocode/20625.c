_nw_connection_send
void __cdecl nw_connection_send(
        nw_connection_t connection,
        dispatch_data_t content,
        nw_content_context_t context,
        bool is_complete,
        nw_connection_send_completion_t completion)
{
  _nw_connection_send(connection, content, context, is_complete, completion);
}