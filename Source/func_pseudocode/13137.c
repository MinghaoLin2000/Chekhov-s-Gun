-[NSValue CGAffineTransformValue]
CGAffineTransform *__cdecl -[NSValue CGAffineTransformValue](
        CGAffineTransform *__return_ptr retstr,
        NSValue *self,
        SEL a3)
{
  *(_OWORD *)&retstr->c = 0u;
  *(_OWORD *)&retstr->tx = 0u;
  *(_OWORD *)&retstr->a = 0u;
  return (CGAffineTransform *)-[NSValue getValue:](self, "getValue:", retstr);
}