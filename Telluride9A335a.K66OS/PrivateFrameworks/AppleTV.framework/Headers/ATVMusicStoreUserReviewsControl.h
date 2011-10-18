/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreUserReviewsControl : BRControl {
@private
	NSDictionary *_itemDictionary;	// 48 = 0x30
}
+ (id)userReviewsControlWithDictionary:(id)dictionary;	// 0x3412c8f9
- (id)initWithDictionary:(id)dictionary;	// 0x3412c935
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x3412d5b9
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x3412d4ad
- (id)_largeImageForRating:(float)rating;	// 0x3412d7c5
- (id)_smallImageForRating:(float)rating;	// 0x3412d6a1
- (id)accessibilityLabel;	// 0x3412d491
- (void)dealloc;	// 0x3412c98d
- (void)layoutSubcontrols;	// 0x3412c9d9
@end

