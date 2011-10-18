/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"


@protocol UIWebPDFViewDelegate
@optional
- (void)didDetermineDocumentBounds:(id)bounds;
- (id)passwordForPDFView:(id)pdfview;
- (void)pdfView:(id)view shouldZoomToRect:(CGRect)rect;
- (void)pdfView:(id)view willClickAnnotation:(CGPDFDictionaryRef)annotation inRect:(CGRect)rect;
- (void)shouldResetZoom:(id)zoom;
@end

