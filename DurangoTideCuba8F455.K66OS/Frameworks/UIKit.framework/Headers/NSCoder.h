/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSCoder.h> // Unknown library
#import "UIKit-Structs.h"


@interface NSCoder (UIGeometryKeyedCoding)
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x301d356d
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x300f640d
- (CGRect)decodeCGRectForKey:(id)key;	// 0x301d36d5
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x301d3635
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x301d3a29
- (void)encodeCGAffineTransform:(CGAffineTransform)transform forKey:(id)key;	// 0x301d382d
- (void)encodeCGPoint:(CGPoint)point forKey:(id)key;	// 0x300f62f1
- (void)encodeCGRect:(CGRect)rect forKey:(id)key;	// 0x301d38d5
- (void)encodeCGSize:(CGSize)size forKey:(id)key;	// 0x301d390d
- (void)encodeUIEdgeInsets:(UIEdgeInsets)insets forKey:(id)key;	// 0x301d3771
@end

@interface NSCoder (UITypeSafety)
- (id)_copyDecodedObjectForKey:(id)key ofClass:(Class)aClass;	// 0x3032ef7d
@end

