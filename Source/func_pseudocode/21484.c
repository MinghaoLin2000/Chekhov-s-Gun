-[LSRConnection .cxx_destruct]
void __cdecl -[LSRConnection .cxx_destruct](LSRConnection *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_euclidInstance, 0LL);
  objc_storeStrong((id *)&self->_generalASRAssetDelegateInterface, 0LL);
  objc_storeStrong((id *)&self->_assistantAssetDelegateInterface, 0LL);
  objc_storeStrong((id *)&self->_earInterface, 0LL);
  objc_storeStrong((id *)&self->_lsrLanguageModel, 0LL);
  objc_storeStrong((id *)&self->sigterm_source, 0LL);
  objc_storeStrong((id *)&self->sigterm_queue, 0LL);
  objc_storeStrong((id *)&self->_modelRoot, 0LL);
  objc_storeStrong((id *)&self->_audioDump, 0LL);
  objc_storeStrong((id *)&self->_requestParameters, 0LL);
  objc_storeStrong((id *)&self->_consumedSandboxExtensions, 0LL);
  objc_storeStrong((id *)&self->_lastRecognitionResult, 0LL);
  objc_storeStrong((id *)&self->_bufferedAudioPackets, 0LL);
  objc_storeStrong((id *)&self->_connection, 0LL);
  objc_storeStrong((id *)&self->_audioBuffer, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_recognizer);
}