_nw_connection_receive
void __cdecl nw_connection_receive(
        nw_connection_t connection,
        uint32_t minimum_incomplete_length,
        uint32_t maximum_length,
        nw_connection_receive_completion_t completion)
{
  _nw_connection_receive(connection, minimum_incomplete_length, maximum_length, completion);
}