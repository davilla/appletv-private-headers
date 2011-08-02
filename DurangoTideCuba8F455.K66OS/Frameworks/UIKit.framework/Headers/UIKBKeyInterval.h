/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIKBKey;

__attribute__((visibility("hidden")))
@interface UIKBKeyInterval : NSObject {
@private
	UIKBKey *_key;	// 4 = 0x4
	double _interval;	// 8 = 0x8
}
@property(assign, nonatomic) double interval;	// G=0x3016717d; S=0x30166f1d; @synthesize=_interval
@property(retain, nonatomic) UIKBKey *key;	// G=0x3016b315; S=0x30166ef5; @synthesize=_key
- (id)initWithKey:(id)key interval:(double)interval;	// 0x30166e85
- (void)dealloc;	// 0x3016b431
// declared property getter: - (double)interval;	// 0x3016717d
// declared property getter: - (id)key;	// 0x3016b315
// declared property setter: - (void)setInterval:(double)interval;	// 0x30166f1d
// declared property setter: - (void)setKey:(id)key;	// 0x30166ef5
@end

