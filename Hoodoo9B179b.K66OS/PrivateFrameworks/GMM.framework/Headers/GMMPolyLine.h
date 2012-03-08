/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface GMMPolyLine : PBCodable {
	BOOL _hasLineWidth;	// 4 = 0x4
	int _lineWidth;	// 8 = 0x8
	BOOL _hasLineColor;	// 12 = 0xc
	int _lineColor;	// 16 = 0x10
	NSData *_line;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL hasLine;	// G=0x31ceed91; 
@property(assign, nonatomic) BOOL hasLineColor;	// G=0x31cef0fd; S=0x31cef10d; @synthesize=_hasLineColor
@property(assign, nonatomic) BOOL hasLineWidth;	// G=0x31cef0cd; S=0x31cef0dd; @synthesize=_hasLineWidth
@property(retain, nonatomic) NSData *line;	// G=0x31cef12d; S=0x31cef13d; @synthesize=_line
@property(assign, nonatomic) int lineColor;	// G=0x31cef11d; S=0x31ceed6d; @synthesize=_lineColor
@property(assign, nonatomic) int lineWidth;	// G=0x31cef0ed; S=0x31ceed49; @synthesize=_lineWidth
- (void)dealloc;	// 0x31ceed05
- (id)description;	// 0x31ceeda9
- (id)dictionaryRepresentation;	// 0x31ceee19
// declared property getter: - (BOOL)hasLine;	// 0x31ceed91
// declared property getter: - (BOOL)hasLineColor;	// 0x31cef0fd
// declared property getter: - (BOOL)hasLineWidth;	// 0x31cef0cd
// declared property getter: - (id)line;	// 0x31cef12d
// declared property getter: - (int)lineColor;	// 0x31cef11d
// declared property getter: - (int)lineWidth;	// 0x31cef0ed
- (BOOL)readFrom:(id)from;	// 0x31ceef1d
// declared property setter: - (void)setHasLineColor:(BOOL)color;	// 0x31cef10d
// declared property setter: - (void)setHasLineWidth:(BOOL)width;	// 0x31cef0dd
// declared property setter: - (void)setLine:(id)line;	// 0x31cef13d
// declared property setter: - (void)setLineColor:(int)color;	// 0x31ceed6d
// declared property setter: - (void)setLineWidth:(int)width;	// 0x31ceed49
- (void)writeTo:(id)to;	// 0x31cef035
@end
