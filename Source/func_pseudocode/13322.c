-[TSUEncodedBlockInfoInternal description]
NSString *__cdecl -[TSUEncodedBlockInfoInternal description](TSUEncodedBlockInfoInternal *self, SEL a2)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("[EncodedLength=%zu; DecodedLength=%zu]"),
           -[TSUEncodedBlockInfoInternal encodedLength](self, "encodedLength"),
           -[TSUEncodedBlockInfoInternal decodedLength](self, "decodedLength"));
}