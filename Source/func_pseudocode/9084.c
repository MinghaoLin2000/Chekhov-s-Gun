-[TSPPackageWriter .cxx_destruct]
void __cdecl -[TSPPackageWriter .cxx_destruct](TSPPackageWriter *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_progress, 0LL);
  objc_storeStrong((id *)&self->_zipArchiveWriter, 0LL);
  objc_storeStrong((id *)&self->_encryptionKey, 0LL);
  objc_storeStrong((id *)&self->_documentSaveValidationPolicy, 0LL);
  objc_storeStrong((id *)&self->_relativeURLForExternalData, 0LL);
  objc_storeStrong((id *)&self->_documentTargetURL, 0LL);
  objc_storeStrong((id *)&self->_URL, 0LL);
  objc_storeStrong((id *)&self->_writtenPackage, 0LL);
  objc_storeStrong((id *)&self->_error, 0LL);
  objc_storeStrong((id *)&self->_errorQueue, 0LL);
  objc_storeStrong((id *)&self->_componentWriteChannel, 0LL);
  objc_destroyWeak((id *)&self->_fileCoordinatorDelegate);
  objc_storeStrong((id *)&self->_originalSupportPackage, 0LL);
  objc_storeStrong((id *)&self->_originalDocumentPackage, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_documentMetadata, 0LL);
}