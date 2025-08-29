-[SUContainedSoftwareUpdateController .cxx_destruct]
void __cdecl -[SUContainedSoftwareUpdateController .cxx_destruct](SUContainedSoftwareUpdateController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_xpcConnection);
  objc_storeStrong((id *)&self->_activeSoftwareUpdateController, 0LL);
  objc_storeStrong((id *)&self->_enqueuedSoftwareUpdateControllers, 0LL);
  objc_storeStrong((id *)&self->_contextsForController, 0LL);
  objc_storeStrong((id *)&self->_contextQueue, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_queue, 0LL);
}