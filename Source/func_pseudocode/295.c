-[_NSAttributedStringAgentService start]
void __cdecl -[_NSAttributedStringAgentService start](_NSAttributedStringAgentService *self, SEL a2)
{
  -[NSXPCListener resume](self->_listener, "resume");
}