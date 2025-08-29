-[MediaConversionRequestTracker .cxx_destruct]
void __cdecl -[MediaConversionRequestTracker .cxx_destruct](MediaConversionRequestTracker *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_originalRequestIdentifier, 0LL);
  objc_storeStrong((id *)&self->_coreImageGraphDumpURLsAtStart, 0LL);
  objc_storeStrong((id *)&self->_cachedPerfCheckInformation, 0LL);
  objc_storeStrong((id *)&self->_transaction, 0LL);
  objc_storeStrong((id *)&self->_debugDumpDirectoryURL, 0LL);
  objc_storeStrong((id *)&self->_requestOptions, 0LL);
  objc_storeStrong((id *)&self->_coreImageGraphDumpPaths, 0LL);
  objc_storeStrong((id *)&self->_endTime, 0LL);
  objc_storeStrong((id *)&self->_dequeueAndStartProcessingTime, 0LL);
  objc_storeStrong((id *)&self->_enqueueTime, 0LL);
  objc_storeStrong((id *)&self->_error, 0LL);
  objc_storeStrong((id *)&self->_serviceInformation, 0LL);
  objc_storeStrong((id *)&self->_outputInformation, 0LL);
  objc_storeStrong((id *)&self->_outputURL, 0LL);
  objc_storeStrong((id *)&self->_outputTypeIdentifier, 0LL);
  objc_storeStrong((id *)&self->_outputData, 0LL);
  objc_storeStrong((id *)&self->_destinationURLCollection, 0LL);
  objc_storeStrong((id *)&self->_sourceURLCollection, 0LL);
  objc_storeStrong((id *)&self->_cachedDestinationURLCollectionSignature, 0LL);
  objc_storeStrong((id *)&self->_cachedSourceURLCollectionSignature, 0LL);
  objc_storeStrong((id *)&self->_cachedSourceURLFilenameOnlySummary, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_cachedRequestOptionsSignature, 0LL);
}