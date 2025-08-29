-[TSUZipWriter .cxx_destruct]
void __cdecl -[TSUZipWriter .cxx_destruct](TSUZipWriter *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_error, 0LL);
  objc_storeStrong((id *)&self->_writeQueue, 0LL);
  objc_storeStrong((id *)&self->_entryDatas, 0LL);
  objc_storeStrong((id *)&self->_localFileHeaderData, 0LL);
  objc_storeStrong((id *)&self->_newEntryLastModificationDate, 0LL);
  objc_storeStrong((id *)&self->_lastModificationDateIfSizeAndCRCMatches, 0LL);
  objc_storeStrong((id *)&self->_currentEntry, 0LL);
  objc_storeStrong((id *)&self->_entriesMap, 0LL);
  objc_storeStrong((id *)&self->_sortedEntries, 0LL);
  objc_storeStrong((id *)&self->_entries, 0LL);
  objc_storeStrong((id *)&self->_writeChannelCompletionSemaphore, 0LL);
  objc_storeStrong((id *)&self->_writeChannel, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_channelQueue, 0LL);
}