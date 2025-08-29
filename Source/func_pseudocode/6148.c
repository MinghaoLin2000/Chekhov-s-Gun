-[MediaConversionQueueEntry .cxx_destruct]
void __cdecl -[MediaConversionQueueEntry .cxx_destruct](MediaConversionQueueEntry *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_transaction, 0LL);
  objc_storeStrong((id *)&self->_temporaryDestinationURLCollection, 0LL);
  objc_storeStrong((id *)&self->_sourceURLCollection, 0LL);
  objc_storeStrong((id *)&self->_videoConversionTask, 0LL);
  objc_storeStrong((id *)&self->_temporaryFilesParentDirectoryURL, 0LL);
  objc_storeStrong((id *)&self->_initialRequestConversionOptions, 0LL);
  objc_storeStrong((id *)&self->_initialRequestIdentifier, 0LL);
  objc_storeStrong((id *)&self->_identifier, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_clientRequests, 0LL);
}