-[LSRLanguageModel addProns:forWord:]
bool __cdecl -[LSRLanguageModel addProns:forWord:](LSRLanguageModel *self, SEL a2, id a3, id a4)
{
  return (unsigned __int8)-[_EARAppLmData setXsampaProns:forWord:](self->_appLmData, "setXsampaProns:forWord:", a3, a4);
}