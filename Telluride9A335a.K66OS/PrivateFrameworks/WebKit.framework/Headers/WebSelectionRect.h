/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "NSCopying.h"


@interface WebSelectionRect : NSObject <NSCopying> {
@private
	CGRect m_rect;	// 4 = 0x4
	int m_writingDirection;	// 20 = 0x14
	BOOL m_isLineBreak;	// 24 = 0x18
	BOOL m_isFirstOnLine;	// 25 = 0x19
	BOOL m_isLastOnLine;	// 26 = 0x1a
	BOOL m_containsStart;	// 27 = 0x1b
	BOOL m_containsEnd;	// 28 = 0x1c
	BOOL m_isInFixedPosition;	// 29 = 0x1d
}
@property(assign, nonatomic) BOOL containsEnd;	// G=0x347e1f49; S=0x347e1f59; @synthesize=m_containsEnd
@property(assign, nonatomic) BOOL containsStart;	// G=0x347e1f69; S=0x347e1f79; @synthesize=m_containsStart
@property(assign, nonatomic) BOOL isFirstOnLine;	// G=0x347e1fa9; S=0x347e1fb9; @synthesize=m_isFirstOnLine
@property(assign, nonatomic) BOOL isInFixedPosition;	// G=0x347e1f29; S=0x347e1f39; @synthesize=m_isInFixedPosition
@property(assign, nonatomic) BOOL isLastOnLine;	// G=0x347e1f89; S=0x347e1f99; @synthesize=m_isLastOnLine
@property(assign, nonatomic) BOOL isLineBreak;	// G=0x347e1fc9; S=0x347e1fd9; @synthesize=m_isLineBreak
@property(assign, nonatomic) CGRect rect;	// G=0x347e2009; S=0x347e202d; @synthesize=m_rect
@property(assign, nonatomic) int writingDirection;	// G=0x347e1fe9; S=0x347e1ff9; @synthesize=m_writingDirection
+ (CGRect)endEdge:(id)edge;	// 0x347e2141
+ (id)selectionRect;	// 0x347e23f5
+ (CGRect)startEdge:(id)edge;	// 0x347e2299
- (id)init;	// 0x347e2051
// declared property getter: - (BOOL)containsEnd;	// 0x347e1f49
// declared property getter: - (BOOL)containsStart;	// 0x347e1f69
- (id)copyWithZone:(NSZone *)zone;	// 0x347e2609
- (id)description;	// 0x347e242d
// declared property getter: - (BOOL)isFirstOnLine;	// 0x347e1fa9
// declared property getter: - (BOOL)isInFixedPosition;	// 0x347e1f29
// declared property getter: - (BOOL)isLastOnLine;	// 0x347e1f89
// declared property getter: - (BOOL)isLineBreak;	// 0x347e1fc9
// declared property getter: - (CGRect)rect;	// 0x347e2009
// declared property setter: - (void)setContainsEnd:(BOOL)end;	// 0x347e1f59
// declared property setter: - (void)setContainsStart:(BOOL)start;	// 0x347e1f79
// declared property setter: - (void)setIsFirstOnLine:(BOOL)line;	// 0x347e1fb9
// declared property setter: - (void)setIsInFixedPosition:(BOOL)fixedPosition;	// 0x347e1f39
// declared property setter: - (void)setIsLastOnLine:(BOOL)line;	// 0x347e1f99
// declared property setter: - (void)setIsLineBreak:(BOOL)aBreak;	// 0x347e1fd9
// declared property setter: - (void)setRect:(CGRect)rect;	// 0x347e202d
// declared property setter: - (void)setWritingDirection:(int)direction;	// 0x347e1ff9
// declared property getter: - (int)writingDirection;	// 0x347e1fe9
@end

