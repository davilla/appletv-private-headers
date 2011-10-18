/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSGCell : PBCodable {
	int _lac;	// 4 = 0x4
	int _cellid;	// 8 = 0x8
	BOOL _hasMnc;	// 12 = 0xc
	int _mnc;	// 16 = 0x10
	BOOL _hasMcc;	// 20 = 0x14
	int _mcc;	// 24 = 0x18
	BOOL _hasRssi;	// 28 = 0x1c
	int _rssi;	// 32 = 0x20
	BOOL _hasAge;	// 36 = 0x24
	int _age;	// 40 = 0x28
	BOOL _hasTimingAdvance;	// 44 = 0x2c
	int _timingAdvance;	// 48 = 0x30
	BOOL _hasPrimaryScramblingCode;	// 52 = 0x34
	int _primaryScramblingCode;	// 56 = 0x38
}
@property(assign, nonatomic) int age;	// G=0x30b7e7dd; S=0x30b7e801; @synthesize=_age
@property(assign, nonatomic) int cellid;	// G=0x30b7ee15; S=0x30b7ee25; @synthesize=_cellid
@property(assign, nonatomic) BOOL hasAge;	// G=0x30b7ee95; S=0x30b7eea5; @synthesize=_hasAge
@property(assign, nonatomic) BOOL hasMcc;	// G=0x30b7ee55; S=0x30b7ee65; @synthesize=_hasMcc
@property(assign, nonatomic) BOOL hasMnc;	// G=0x30b7ee35; S=0x30b7ee45; @synthesize=_hasMnc
@property(assign, nonatomic) BOOL hasPrimaryScramblingCode;	// G=0x30b7eed5; S=0x30b7eee5; @synthesize=_hasPrimaryScramblingCode
@property(assign, nonatomic) BOOL hasRssi;	// G=0x30b7ee75; S=0x30b7ee85; @synthesize=_hasRssi
@property(assign, nonatomic) BOOL hasTimingAdvance;	// G=0x30b7eeb5; S=0x30b7eec5; @synthesize=_hasTimingAdvance
@property(assign, nonatomic) int lac;	// G=0x30b7edf5; S=0x30b7ee05; @synthesize=_lac
@property(assign, nonatomic) int mcc;	// G=0x30b7e741; S=0x30b7e769; @synthesize=_mcc
@property(assign, nonatomic) int mnc;	// G=0x30b7e6f5; S=0x30b7e71d; @synthesize=_mnc
@property(assign, nonatomic) int primaryScramblingCode;	// G=0x30b7eef5; S=0x30b7e871; @synthesize=_primaryScramblingCode
@property(assign, nonatomic) int rssi;	// G=0x30b7e78d; S=0x30b7e7b9; @synthesize=_rssi
@property(assign, nonatomic) int timingAdvance;	// G=0x30b7e825; S=0x30b7e84d; @synthesize=_timingAdvance
// declared property getter: - (int)age;	// 0x30b7e7dd
// declared property getter: - (int)cellid;	// 0x30b7ee15
- (void)dealloc;	// 0x30b7e6c9
- (id)description;	// 0x30b7e895
- (id)dictionaryRepresentation;	// 0x30b7e905
// declared property getter: - (BOOL)hasAge;	// 0x30b7ee95
// declared property getter: - (BOOL)hasMcc;	// 0x30b7ee55
// declared property getter: - (BOOL)hasMnc;	// 0x30b7ee35
// declared property getter: - (BOOL)hasPrimaryScramblingCode;	// 0x30b7eed5
// declared property getter: - (BOOL)hasRssi;	// 0x30b7ee75
// declared property getter: - (BOOL)hasTimingAdvance;	// 0x30b7eeb5
// declared property getter: - (int)lac;	// 0x30b7edf5
// declared property getter: - (int)mcc;	// 0x30b7e741
// declared property getter: - (int)mnc;	// 0x30b7e6f5
// declared property getter: - (int)primaryScramblingCode;	// 0x30b7eef5
- (BOOL)readFrom:(id)from;	// 0x30b7eb25
// declared property getter: - (int)rssi;	// 0x30b7e78d
// declared property setter: - (void)setAge:(int)age;	// 0x30b7e801
// declared property setter: - (void)setCellid:(int)cellid;	// 0x30b7ee25
// declared property setter: - (void)setHasAge:(BOOL)age;	// 0x30b7eea5
// declared property setter: - (void)setHasMcc:(BOOL)mcc;	// 0x30b7ee65
// declared property setter: - (void)setHasMnc:(BOOL)mnc;	// 0x30b7ee45
// declared property setter: - (void)setHasPrimaryScramblingCode:(BOOL)code;	// 0x30b7eee5
// declared property setter: - (void)setHasRssi:(BOOL)rssi;	// 0x30b7ee85
// declared property setter: - (void)setHasTimingAdvance:(BOOL)advance;	// 0x30b7eec5
// declared property setter: - (void)setLac:(int)lac;	// 0x30b7ee05
// declared property setter: - (void)setMcc:(int)mcc;	// 0x30b7e769
// declared property setter: - (void)setMnc:(int)mnc;	// 0x30b7e71d
// declared property setter: - (void)setPrimaryScramblingCode:(int)code;	// 0x30b7e871
// declared property setter: - (void)setRssi:(int)rssi;	// 0x30b7e7b9
// declared property setter: - (void)setTimingAdvance:(int)advance;	// 0x30b7e84d
// declared property getter: - (int)timingAdvance;	// 0x30b7e825
- (void)writeTo:(id)to;	// 0x30b7ecbd
@end

