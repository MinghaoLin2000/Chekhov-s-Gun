-[TSUSafeSaveAssistant endSaveWithSuccess:addingAttributes:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[TSUSafeSaveAssistant endSaveWithSuccess:addingAttributes:error:](
        TSUSafeSaveAssistant *self,
        SEL a2,
        bool a3,
        id a4,
        id *a5)
{
  return -[TSUSafeSaveAssistant endSaveWithSuccess:toURL:addingAttributes:error:](
           self,
           "endSaveWithSuccess:toURL:addingAttributes:error:",
           a3,
           self->_saveURL,
           a4,
           a5);
}