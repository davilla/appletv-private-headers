/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImage.h"


__attribute__((visibility("hidden")))
@interface _UIStretchableImage : UIImage {
@private
	int _leftCapWidth;	// 16 = 0x10
	int _topCapHeight;	// 20 = 0x14
}
- (id)initWithImage:(id)image leftCapWidth:(int)width topCapHeight:(int)height;	// 0x300b644d
- (CGRect)_contentStretch;	// 0x300b9135
@end

