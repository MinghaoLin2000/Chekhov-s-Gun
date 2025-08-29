_CGPDFPageGetDrawingTransform
CGAffineTransform *__cdecl CGPDFPageGetDrawingTransform(
        CGAffineTransform *__return_ptr retstr,
        CGPDFPageRef page,
        CGPDFBox box,
        CGRect rect,
        int rotate,
        bool preserveAspectRatio)
{
  return _CGPDFPageGetDrawingTransform(retstr, page, box, rect, rotate, preserveAspectRatio);
}