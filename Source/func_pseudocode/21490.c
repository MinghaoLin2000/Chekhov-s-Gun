-[LSRConnection makeEARLanguageDetectorWithDetectorOptions:clientInfo:analysisOptions:reply:]
void __cdecl -[LSRConnection makeEARLanguageDetectorWithDetectorOptions:clientInfo:analysisOptions:reply:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  -[EARInterface makeEARLanguageDetectorWithDetectorOptions:clientInfo:analysisOptions:reply:](
    self->_earInterface,
    "makeEARLanguageDetectorWithDetectorOptions:clientInfo:analysisOptions:reply:",
    a3,
    a4,
    a5,
    a6);
}