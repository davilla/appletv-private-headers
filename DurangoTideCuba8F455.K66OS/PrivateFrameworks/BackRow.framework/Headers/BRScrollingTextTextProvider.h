/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"
#import "BackRow-Structs.h"

@class BRTypesetter, NSAttributedString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRScrollingTextTextProvider : NSObject <BRProvider> {
@private
	BRTypesetter *_typesetter;	// 4 = 0x4
	NSAttributedString *_string;	// 8 = 0x8
	id<BRControlFactory> _factory;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
}
@property(retain) id attributedString;	// G=0x32f7bc35; S=0x32f7bd89; converted property
+ (id)providerWithAttributedString:(id)attributedString;	// 0x32f7bea1
- (id)init;	// 0x32f7be45
- (void)_updateTypesetter;	// 0x32f7bc59
// converted property getter: - (id)attributedString;	// 0x32f7bc35
- (id)controlFactory;	// 0x32f7bc45
- (id)dataAtIndex:(long)index;	// 0x32f7bcfd
- (long)dataCount;	// 0x32f7bd1d
- (void)dealloc;	// 0x32f7bdd9
- (id)hashForDataAtIndex:(long)index;	// 0x32f7bc55
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32f7bd89
- (void)setTextBoxSize:(CGSize)size;	// 0x32f7bd3d
@end

