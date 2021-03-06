/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSCoder.h> // Unknown library


@interface NSCoder (UIGeometryKeyedCoding)
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x35828b49
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x35737269
- (CGRect)decodeCGRectForKey:(id)key;	// 0x35828b01
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x35828ac1
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x35828ba1
- (UIOffset)decodeUIOffsetForKey:(id)key;	// 0x35828bd5
- (void)encodeCGAffineTransform:(CGAffineTransform)transform forKey:(id)key;	// 0x35828a25
- (void)encodeCGPoint:(CGPoint)point forKey:(id)key;	// 0x356a2235
- (void)encodeCGRect:(CGRect)rect forKey:(id)key;	// 0x358289f1
- (void)encodeCGSize:(CGSize)size forKey:(id)key;	// 0x358289c9
- (void)encodeUIEdgeInsets:(UIEdgeInsets)insets forKey:(id)key;	// 0x35828a65
- (void)encodeUIOffset:(UIOffset)offset forKey:(id)key;	// 0x35828a99
@end

@interface NSCoder (UITypeSafety)
- (id)_copyDecodedObjectForKey:(id)key ofClass:(Class)aClass;	// 0x359a4df1
@end

