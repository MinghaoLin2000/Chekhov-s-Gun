_xpc_connection_send_message_with_reply
void __cdecl xpc_connection_send_message_with_reply(
        xpc_connection_t connection,
        xpc_object_t message,
        dispatch_queue_t replyq,
        xpc_handler_t handler)
{
  _xpc_connection_send_message_with_reply(connection, message, replyq, handler);
}