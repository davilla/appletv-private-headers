/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIWebDocumentView, NSArray;
@protocol WebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPaginationInfo : NSObject {
@private
	NSObject<WebDocumentView> *_documentView;	// 4 = 0x4
	float _scaleFactor;	// 8 = 0x8
	CGSize _layoutSize;	// 12 = 0xc
	NSArray *_pageRects;	// 20 = 0x14
	UIWebDocumentView *_webDocumentView;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) float lastPageHeight;	// G=0x33bbb42d; 
@property(readonly, assign) CGSize layoutSize;	// G=0x33bbb5a9; converted property
@property(readonly, assign, nonatomic) unsigned pageCount;	// G=0x33bbb40d; 
@property(readonly, retain) NSArray *pageRects;	// G=0x33bbb5c5; converted property
@property(readonly, assign) float scaleFactor;	// G=0x33bbb599; converted property
@property(retain, nonatomic) UIWebDocumentView *webDocumentView;	// G=0x33bbb5e5; S=0x33bbb5f5; @synthesize=_webDocumentView
- (id)initWithDocumentView:(id)documentView scaleFactor:(float)factor layoutSize:(CGSize)size pageRects:(id)rects;	// 0x33bbb2c9
- (void)dealloc;	// 0x33bbb385
- (id)documentView;	// 0x33bbb5d5
// declared property getter: - (float)lastPageHeight;	// 0x33bbb42d
// converted property getter: - (CGSize)layoutSize;	// 0x33bbb5a9
// declared property getter: - (unsigned)pageCount;	// 0x33bbb40d
// converted property getter: - (id)pageRects;	// 0x33bbb5c5
// converted property getter: - (float)scaleFactor;	// 0x33bbb599
// declared property setter: - (void)setWebDocumentView:(id)view;	// 0x33bbb5f5
- (CGSize)sizeForPageAtIndex:(int)index;	// 0x33bbb4cd
// declared property getter: - (id)webDocumentView;	// 0x33bbb5e5
@end

