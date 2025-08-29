-[WiFi3BarsResponse encodeWithCoder:]
void __cdecl -[WiFi3BarsResponse encodeWithCoder:](WiFi3BarsResponse *self, SEL a2, id a3)
{
  objc_msgSend(a3, "encodeObject:forKey:", self->_results, CFSTR("results"));
}