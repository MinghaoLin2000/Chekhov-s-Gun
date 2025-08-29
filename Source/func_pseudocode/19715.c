-[IPPSessionTransaction .cxx_destruct]
void __cdecl -[IPPSessionTransaction .cxx_destruct](IPPSessionTransaction *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_documentCompressor, 0LL);
  objc_storeStrong((id *)&self->_transportError, 0LL);
  objc_storeStrong(&self->_transactionCompletedCallback, 0LL);
  objc_storeStrong(&self->_initialPayloadSentCallback, 0LL);
  objc_storeStrong(&self->_boundInterfaceSet_callback, 0LL);
  objc_storeStrong(&self->_pass_callback, 0LL);
  objc_storeStrong(&self->_trust_callback, 0LL);
  objc_storeStrong((id *)&self->_session, 0LL);
  objc_storeStrong((id *)&self->_logLeader, 0LL);
  objc_storeStrong((id *)&self->_responseData, 0LL);
  objc_storeStrong((id *)&self->_httpResponse, 0LL);
  objc_storeStrong((id *)&self->_inputStream, 0LL);
  objc_storeStrong((id *)&self->_taskQueue, 0LL);
  objc_storeStrong((id *)&self->_outputStream, 0LL);
  objc_destroyWeak((id *)&self->_task);
  objc_storeStrong((id *)&self->_initialRequest, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_url, 0LL);
}