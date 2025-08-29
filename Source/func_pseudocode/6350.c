-[VideoConversionTask .cxx_destruct]
void __cdecl -[VideoConversionTask .cxx_destruct](VideoConversionTask *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_progressObserver);
  objc_storeStrong((id *)&self->_requestTracker, 0LL);
  objc_storeStrong((id *)&self->_conversionEndTime, 0LL);
  objc_storeStrong((id *)&self->_conversionStartTime, 0LL);
  objc_storeStrong((id *)&self->_enqueueTime, 0LL);
  objc_storeStrong(&self->_completionHandler, 0LL);
  objc_storeStrong((id *)&self->_progressUpdateTimerSource, 0LL);
  objc_storeStrong((id *)&self->_asset, 0LL);
  objc_storeStrong((id *)&self->_error, 0LL);
  objc_storeStrong((id *)&self->_resultInformation, 0LL);
  objc_storeStrong((id *)&self->_outputURLCollection, 0LL);
  objc_storeStrong((id *)&self->_sourceURLCollection, 0LL);
  objc_storeStrong((id *)&self->_options, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_identifier, 0LL);
}