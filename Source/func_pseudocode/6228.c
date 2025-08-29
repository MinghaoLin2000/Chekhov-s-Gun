-[PAMediaConversionServiceImageConversionJob .cxx_destruct]
void __cdecl -[PAMediaConversionServiceImageConversionJob .cxx_destruct](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_imageDestinationData, 0LL);
  objc_storeStrong((id *)&self->_candidacy, 0LL);
  objc_storeStrong((id *)&self->_metadataPolicy, 0LL);
  objc_storeStrong((id *)&self->_outputFileType, 0LL);
  objc_storeStrong((id *)&self->_inputFileType, 0LL);
  objc_storeStrong((id *)&self->_error, 0LL);
  objc_storeStrong((id *)&self->_adjustmentInformation, 0LL);
  objc_storeStrong((id *)&self->_destinationData, 0LL);
  objc_storeStrong((id *)&self->_destinationResourceURLCollection, 0LL);
  objc_storeStrong((id *)&self->_sourceResourceURLCollection, 0LL);
  objc_storeStrong((id *)&self->_requestIdentifier, 0LL);
  objc_storeStrong((id *)&self->_destinationImageProperties, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_sourceImageProperties, 0LL);
}