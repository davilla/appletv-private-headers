/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface WebSelectionRect : NSObject <NSCopying> {
	CGRect m_rect;	// 4 = 0x4
	int m_writingDirection;	// 20 = 0x14
	BOOL m_isLineBreak;	// 24 = 0x18
	BOOL m_isFirstOnLine;	// 25 = 0x19
	BOOL m_isLastOnLine;	// 26 = 0x1a
	BOOL m_containsStart;	// 27 = 0x1b
	BOOL m_containsEnd;	// 28 = 0x1c
	BOOL m_isInFixedPosition;	// 29 = 0x1d
	BOOL m_isHorizontal;	// 30 = 0x1e
}
@property(assign, nonatomic) BOOL containsEnd;	// G=0x316cf421; S=0x316cf431; @synthesize=m_containsEnd
@property(assign, nonatomic) BOOL containsStart;	// G=0x316cf401; S=0x316cf411; @synthesize=m_containsStart
@property(assign, nonatomic) BOOL isFirstOnLine;	// G=0x316cf3c1; S=0x316cf3d1; @synthesize=m_isFirstOnLine
@property(assign, nonatomic) BOOL isHorizontal;	// G=0x316cf461; S=0x316cf471; @synthesize=m_isHorizontal
@property(assign, nonatomic) BOOL isInFixedPosition;	// G=0x316cf441; S=0x316cf451; @synthesize=m_isInFixedPosition
@property(assign, nonatomic) BOOL isLastOnLine;	// G=0x316cf3e1; S=0x316cf3f1; @synthesize=m_isLastOnLine
@property(assign, nonatomic) BOOL isLineBreak;	// G=0x316cf3a1; S=0x316cf3b1; @synthesize=m_isLineBreak
@property(assign, nonatomic) CGRect rect;	// G=0x316cf341; S=0x316cf365; @synthesize=m_rect
@property(assign, nonatomic) int writingDirection;	// G=0x316cf381; S=0x316cf391; @synthesize=m_writingDirection
+ (CGRect)endEdge:(id)edge;	// 0x316cec55
+ (id)selectionRect;	// 0x316cea31
+ (CGRect)startEdge:(id)edge;	// 0x316cea69
- (id)init;	// 0x316cee3d
// declared property getter: - (BOOL)containsEnd;	// 0x316cf421
// declared property getter: - (BOOL)containsStart;	// 0x316cf401
- (id)copyWithZone:(NSZone *)zone;	// 0x316cef41
- (id)description;	// 0x316cf0f9
// declared property getter: - (BOOL)isFirstOnLine;	// 0x316cf3c1
// declared property getter: - (BOOL)isHorizontal;	// 0x316cf461
// declared property getter: - (BOOL)isInFixedPosition;	// 0x316cf441
// declared property getter: - (BOOL)isLastOnLine;	// 0x316cf3e1
// declared property getter: - (BOOL)isLineBreak;	// 0x316cf3a1
// declared property getter: - (CGRect)rect;	// 0x316cf341
// declared property setter: - (void)setContainsEnd:(BOOL)end;	// 0x316cf431
// declared property setter: - (void)setContainsStart:(BOOL)start;	// 0x316cf411
// declared property setter: - (void)setIsFirstOnLine:(BOOL)line;	// 0x316cf3d1
// declared property setter: - (void)setIsHorizontal:(BOOL)horizontal;	// 0x316cf471
// declared property setter: - (void)setIsInFixedPosition:(BOOL)fixedPosition;	// 0x316cf451
// declared property setter: - (void)setIsLastOnLine:(BOOL)line;	// 0x316cf3f1
// declared property setter: - (void)setIsLineBreak:(BOOL)aBreak;	// 0x316cf3b1
// declared property setter: - (void)setRect:(CGRect)rect;	// 0x316cf365
// declared property setter: - (void)setWritingDirection:(int)direction;	// 0x316cf391
// declared property getter: - (int)writingDirection;	// 0x316cf381
@end
