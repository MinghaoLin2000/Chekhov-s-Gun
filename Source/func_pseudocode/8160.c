-[XPCSignpostReader .cxx_destruct]
void __cdecl -[XPCSignpostReader .cxx_destruct](XPCSignpostReader *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_sigterm_source, 0LL);
  objc_storeStrong((id *)&self->_sigterm_queue, 0LL);
  objc_storeStrong((id *)&self->_launchTimeSeries, 0LL);
  objc_storeStrong((id *)&self->_numAppSignposts, 0LL);
  objc_storeStrong((id *)&self->_summarizedSignpostEvents, 0LL);
  objc_storeStrong((id *)&self->_summarizedSignpostMetrics, 0LL);
  objc_storeStrong((id *)&self->_summarizedSignpostDurations, 0LL);
  objc_storeStrong((id *)&self->_activations, 0LL);
  objc_storeStrong((id *)&self->_processExits, 0LL);
  objc_storeStrong((id *)&self->_glitches, 0LL);
  objc_storeStrong((id *)&self->_hangs, 0LL);
  objc_storeStrong((id *)&self->_resumes, 0LL);
  objc_storeStrong((id *)&self->_extendedLaunches, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_launches, 0LL);
}