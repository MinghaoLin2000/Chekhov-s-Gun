-[LSRConnection makeEARSpeechRecognizerWithSupportedFeatures:clientInfo:analysisContext:analysisOptions:sandboxExtensions:reply:]
void __cdecl -[LSRConnection makeEARSpeechRecognizerWithSupportedFeatures:clientInfo:analysisContext:analysisOptions:sandboxExtensions:reply:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8)
{
  -[EARInterface makeEARSpeechRecognizerWithSupportedFeatures:clientInfo:analysisContext:analysisOptions:sandboxExtensions:reply:](
    self->_earInterface,
    "makeEARSpeechRecognizerWithSupportedFeatures:clientInfo:analysisContext:analysisOptions:sandboxExtensions:reply:",
    a3,
    a4,
    a5,
    a6,
    a7,
    a8);
}