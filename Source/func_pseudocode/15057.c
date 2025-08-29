-[ATXHeuristicJSEnv .cxx_destruct]
void __cdecl -[ATXHeuristicJSEnv .cxx_destruct](ATXHeuristicJSEnv *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_device, 0LL);
  objc_storeStrong((id *)&self->_now, 0LL);
  objc_storeStrong((id *)&self->_currentInformationHeuristicName, 0LL);
  objc_storeStrong((id *)&self->_currentRefreshTriggerBuffer, 0LL);
  objc_storeStrong((id *)&self->_currentInfoSuggestionsBuffer, 0LL);
  objc_storeStrong((id *)&self->_currentHeuristicName, 0LL);
  objc_storeStrong((id *)&self->_currentExpirersBuffer, 0LL);
  objc_storeStrong((id *)&self->_currentActionsBuffer, 0LL);
  objc_storeStrong((id *)&self->_jsContext, 0LL);
  objc_storeStrong((id *)&self->_virtualMachine, 0LL);
  objc_storeStrong((id *)&self->_provider, 0LL);
  objc_storeStrong((id *)&self->_dataSourcesServer, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_heuristicsBundle, 0LL);
}