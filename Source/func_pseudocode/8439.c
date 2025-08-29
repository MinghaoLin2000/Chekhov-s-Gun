-[_KHSoftwareUpdateControllerContext setCompletionHandlers:]
void __cdecl -[_KHSoftwareUpdateControllerContext setCompletionHandlers:](
        _KHSoftwareUpdateControllerContext *self,
        SEL a2,
        id a3)
{
  objc_storeStrong((id *)&self->_completionHandlers, a3);
}