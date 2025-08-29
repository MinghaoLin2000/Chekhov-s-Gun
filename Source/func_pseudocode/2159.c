-[AMPProgressBarView setFractionCompleted:]
void __cdecl -[AMPProgressBarView setFractionCompleted:](AMPProgressBarView *self, SEL a2, double a3)
{
  self->_fractionCompleted = a3;
  -[AMPProgressBarView setNeedsDisplay:](self, "setNeedsDisplay:", 1LL);
}