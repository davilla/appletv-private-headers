/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"


@interface CPRegion : CPChunk {
	BOOL isTextRegion;	// 52 = 0x34
	BOOL isImageRegion;	// 53 = 0x35
	BOOL isCompoundShape;	// 54 = 0x36
	CPRegion *nextRegion;	// 56 = 0x38
	int order;	// 60 = 0x3c
	id link;	// 64 = 0x40
}
@property(assign) BOOL isCompoundShape;	// G=0x30296941; S=0x30296951; converted property
@property(assign) BOOL isImageRegion;	// G=0x30296919; S=0x30296bf5; converted property
@property(assign) BOOL isTextRegion;	// G=0x30296905; S=0x30296931; converted property
@property(retain) id link;	// G=0x302969a5; S=0x30296995; converted property
@property(retain) CPRegion *nextRegion;	// G=0x30296965; S=0x302969b5; converted property
@property(assign) int order;	// G=0x30296975; S=0x30296985; converted property
- (void)accept:(id)accept;	// 0x30296c29
- (id)copyWithZone:(NSZone *)zone;	// 0x30296c45
- (void)dealloc;	// 0x30296c91
- (BOOL)isBodyZone;	// 0x3029692d
- (BOOL)isBoxRegion;	// 0x30296915
// converted property getter: - (BOOL)isCompoundShape;	// 0x30296941
- (BOOL)isGraphicalRegion;	// 0x30296ae1
// converted property getter: - (BOOL)isImageRegion;	// 0x30296919
- (BOOL)isIndivisible;	// 0x302969f1
- (BOOL)isListItemRegion;	// 0x30296925
- (BOOL)isParagraphRegion;	// 0x30296921
- (BOOL)isRotated;	// 0x30296a85
- (BOOL)isRowRegion;	// 0x30296bc1
- (BOOL)isShapeRegion;	// 0x3029691d
- (BOOL)isTableCellRegion;	// 0x30296929
// converted property getter: - (BOOL)isTextRegion;	// 0x30296905
- (BOOL)isZone;	// 0x30296961
// converted property getter: - (id)link;	// 0x302969a5
// converted property getter: - (id)nextRegion;	// 0x30296965
// converted property getter: - (int)order;	// 0x30296975
// converted property setter: - (void)setIsCompoundShape:(BOOL)shape;	// 0x30296951
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x30296bf5
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x30296931
// converted property setter: - (void)setLink:(id)link;	// 0x30296995
// converted property setter: - (void)setNextRegion:(id)region;	// 0x302969b5
// converted property setter: - (void)setOrder:(int)order;	// 0x30296985
@end

