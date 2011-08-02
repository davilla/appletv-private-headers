/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSMutableArray, CPPage;

@interface CPHitTest : NSObject {
	CPPage *page;	// 4 = 0x4
	NSMutableArray *objectsOnPage;	// 8 = 0x8
	float mapTemp;	// 12 = 0xc
}
@property(readonly, retain) CPPage *page;	// G=0x30bbe15d; converted property
- (id)initWithPage:(id)page;	// 0x30bbe40d
- (id)column:(CGPoint)column;	// 0x30bbe2d9
- (unsigned)columnsAt:(CGPoint)at;	// 0x30bbe325
- (int)compareByReadingOrder:(CGPoint)order to:(CGPoint)to;	// 0x30bbf02d
- (void)dealloc;	// 0x30bbe3b5
- (id)findBestMatch:(id)match atPoint:(CGPoint)point;	// 0x30bbe16d
- (void)findClickableObjects:(BOOL)objects;	// 0x30bbe461
- (id)findObjectIn:(id)anIn at:(CGPoint)at count:(int *)count;	// 0x30bbe775
- (BOOL)hitTestGraphicObject:(id)object point:(CGPoint)point;	// 0x30bbeb45
- (BOOL)hitTestParagraph:(id)paragraph point:(CGPoint)point;	// 0x30bbea51
- (id)layoutArea:(CGPoint)area;	// 0x30bbe35d
- (id)objectAtPoint:(CGPoint)point;	// 0x30bbe2a5
// converted property getter: - (id)page;	// 0x30bbe15d
- (id)paragraph:(CGPoint)paragraph;	// 0x30bbed2d
- (id)paragraphNear:(CGPoint)near;	// 0x30bbee55
- (id)textLine:(CGPoint)line;	// 0x30bbec35
@end

