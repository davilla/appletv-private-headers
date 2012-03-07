/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMAllowableValues : PBCodable {
	NSString *_valueText;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL hasValueText;	// G=0x30b67449; 
@property(retain, nonatomic) NSString *valueText;	// G=0x30b6762d; S=0x30b6763d; @synthesize=_valueText
- (void)dealloc;	// 0x30b67405
- (id)description;	// 0x30b67461
- (id)dictionaryRepresentation;	// 0x30b674d1
// declared property getter: - (BOOL)hasValueText;	// 0x30b67449
- (BOOL)readFrom:(id)from;	// 0x30b67525
// declared property setter: - (void)setValueText:(id)text;	// 0x30b6763d
// declared property getter: - (id)valueText;	// 0x30b6762d
- (void)writeTo:(id)to;	// 0x30b675fd
@end
