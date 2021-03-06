/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPaginationInfo : NSObject {
@private
	float _scaleFactor;	// 4 = 0x4
	CGSize _layoutSize;	// 8 = 0x8
	NSArray *_pageRects;	// 16 = 0x10
	UIWebDocumentView *_webDocumentView;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) float lastPageHeight;	// G=0x30257f55; 
@property(readonly, assign) CGSize layoutSize;	// G=0x30257d69; converted property
@property(readonly, assign, nonatomic) unsigned pageCount;	// G=0x30257da1; 
@property(readonly, retain) NSArray *pageRects;	// G=0x30257d81; converted property
@property(readonly, assign) float scaleFactor;	// G=0x30257d59; converted property
@property(retain, nonatomic) UIWebDocumentView *webDocumentView;	// G=0x30257d91; S=0x30257fd9; @synthesize=_webDocumentView
- (id)initWithScaleFactor:(float)scaleFactor layoutSize:(CGSize)size pageRects:(id)rects;	// 0x30257e2d
- (void)dealloc;	// 0x30257dc1
// declared property getter: - (float)lastPageHeight;	// 0x30257f55
// converted property getter: - (CGSize)layoutSize;	// 0x30257d69
// declared property getter: - (unsigned)pageCount;	// 0x30257da1
// converted property getter: - (id)pageRects;	// 0x30257d81
// converted property getter: - (float)scaleFactor;	// 0x30257d59
// declared property setter: - (void)setWebDocumentView:(id)view;	// 0x30257fd9
- (CGSize)sizeForPageAtIndex:(int)index;	// 0x30257eb5
// declared property getter: - (id)webDocumentView;	// 0x30257d91
@end

