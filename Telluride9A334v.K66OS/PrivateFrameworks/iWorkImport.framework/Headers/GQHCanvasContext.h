/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHContext.h"
#import <NSObject.h> // Unknown library

@class GQDAffineGeometry, NSMutableString;

__attribute__((visibility("hidden")))
@interface GQHCanvasContext : NSObject <GQHContext> {
@private
	GQDAffineGeometry *mGeometry;	// 4 = 0x4
	NSMutableString *mFunctionName;	// 8 = 0x8
	BOOL mHasFill;	// 12 = 0xc
	BOOL mHasStroke;	// 13 = 0xd
	CFStringRef mBezierStr;	// 16 = 0x10
}
- (void)addPathForLineEndStyle:(int)lineEndStyle graphicStyle:(id)style atPoint:(CGPoint)point neighboringCP:(CGPoint)cp filledPath:(CGPathRef *)path strokedPath:(CGPathRef *)path6;	// 0x32c18ced
- (void)addScriptTagToHtml:(id)html state:(id)state;	// 0x32c18881
- (void)createMaskedImageWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry cropGeometry:(id)geometry4 imageBinary:(id)binary graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;	// 0x32c19985
- (void)createShapeWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;	// 0x32c1a4c5
- (void)dealloc;	// 0x32c18c0d
- (GQHPathEndPointInfo)endPointInfoForPath:(CGPathRef)path;	// 0x32c18eed
- (void)mapFill:(id)fill state:(id)state;	// 0x32c18f41
- (void)mapLineEndFillStyle:(id)style state:(id)state;	// 0x32c18a89
- (void)mapLineEndStrokeStyle:(id)style state:(id)state;	// 0x32c18abd
- (void)mapStroke:(id)stroke state:(id)state;	// 0x32c189cd
- (void)mapStyle:(id)style state:(id)state;	// 0x32c1893d
- (void)prepareContext:(id)context;	// 0x32c186e9
- (void)setBezierPath:(char *)path state:(id)state;	// 0x32c19141
- (void)setCGPath:(CGPathRef)path state:(id)state;	// 0x32c18c59
- (void)setContextOpacity:(float)opacity state:(id)state;	// 0x32c19929
- (void)setFillColor:(id)color state:(id)state;	// 0x32c19789
- (void)setGradient:(id)gradient state:(id)state;	// 0x32c1946d
- (void)setImageFill:(CFURLRef)fill srcSize:(CGSize)size mode:(int)mode state:(id)state;	// 0x32c191dd
- (void)setStrokeColor:(id)color width:(float)width state:(id)state;	// 0x32c19851
- (id)strokeColorWithGraphicStyle:(id)graphicStyle;	// 0x32c18ba1
- (float)strokeWidthWithGraphicStyle:(id)graphicStyle;	// 0x32c18b19
- (void)teardownContext:(id)context;	// 0x32c1ac29
- (void)translate:(CGSize)translate state:(id)state;	// 0x32c190d9
@end

