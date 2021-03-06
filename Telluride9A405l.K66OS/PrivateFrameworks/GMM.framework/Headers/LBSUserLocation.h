/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSPoint, NSMutableArray, LBSAddress, NSString;

@interface LBSUserLocation : PBCodable {
	LBSPoint *_latLng;	// 4 = 0x4
	NSString *_source;	// 8 = 0x8
	BOOL _hasAccuracy;	// 12 = 0xc
	int _accuracy;	// 16 = 0x10
	BOOL _hasConfidence;	// 20 = 0x14
	int _confidence;	// 24 = 0x18
	LBSAddress *_address;	// 28 = 0x1c
	NSString *_misc;	// 32 = 0x20
	BOOL _hasObsolete;	// 36 = 0x24
	BOOL _obsolete;	// 37 = 0x25
	NSMutableArray *_features;	// 40 = 0x28
	NSString *_locationString;	// 44 = 0x2c
	long long _timestamp;	// 48 = 0x30
	BOOL _hasLocType;	// 56 = 0x38
	int _locType;	// 60 = 0x3c
}
@property(assign, nonatomic) int accuracy;	// G=0x3159fbdd; S=0x3159ef39; @synthesize=_accuracy
@property(retain, nonatomic) LBSAddress *address;	// G=0x3159fc1d; S=0x3159fc2d; @synthesize=_address
@property(assign, nonatomic) int confidence;	// G=0x3159fc0d; S=0x3159ef5d; @synthesize=_confidence
@property(retain, nonatomic) NSMutableArray *features;	// G=0x3159fcb5; S=0x3159fcc5; @synthesize=_features
@property(assign, nonatomic) BOOL hasAccuracy;	// G=0x3159fbbd; S=0x3159fbcd; @synthesize=_hasAccuracy
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x3159ef81; 
@property(assign, nonatomic) BOOL hasConfidence;	// G=0x3159fbed; S=0x3159fbfd; @synthesize=_hasConfidence
@property(readonly, assign, nonatomic) BOOL hasLatLng;	// G=0x3159ef09; 
@property(assign, nonatomic) BOOL hasLocType;	// G=0x3159fd49; S=0x3159fd59; @synthesize=_hasLocType
@property(readonly, assign, nonatomic) BOOL hasLocationString;	// G=0x3159f079; 
@property(readonly, assign, nonatomic) BOOL hasMisc;	// G=0x3159ef99; 
@property(assign, nonatomic) BOOL hasObsolete;	// G=0x3159fc85; S=0x3159fc95; @synthesize=_hasObsolete
@property(readonly, assign, nonatomic) BOOL hasSource;	// G=0x3159ef21; 
@property(retain, nonatomic) LBSPoint *latLng;	// G=0x3159fb55; S=0x3159fb65; @synthesize=_latLng
@property(assign, nonatomic) int locType;	// G=0x3159fd69; S=0x3159f091; @synthesize=_locType
@property(retain, nonatomic) NSString *locationString;	// G=0x3159fce9; S=0x3159fcf9; @synthesize=_locationString
@property(retain, nonatomic) NSString *misc;	// G=0x3159fc51; S=0x3159fc61; @synthesize=_misc
@property(assign, nonatomic) BOOL obsolete;	// G=0x3159fca5; S=0x3159efb1; @synthesize=_obsolete
@property(retain, nonatomic) NSString *source;	// G=0x3159fb89; S=0x3159fb99; @synthesize=_source
@property(assign, nonatomic) long long timestamp;	// G=0x3159fd1d; S=0x3159fd35; @synthesize=_timestamp
// declared property getter: - (int)accuracy;	// 0x3159fbdd
- (void)addFeature:(id)feature;	// 0x3159efd5
// declared property getter: - (id)address;	// 0x3159fc1d
// declared property getter: - (int)confidence;	// 0x3159fc0d
- (void)dealloc;	// 0x3159ee61
- (id)description;	// 0x3159f0b5
- (id)dictionaryRepresentation;	// 0x3159f125
- (id)featureAtIndex:(unsigned)index;	// 0x3159f059
// declared property getter: - (id)features;	// 0x3159fcb5
- (unsigned)featuresCount;	// 0x3159f039
// declared property getter: - (BOOL)hasAccuracy;	// 0x3159fbbd
// declared property getter: - (BOOL)hasAddress;	// 0x3159ef81
// declared property getter: - (BOOL)hasConfidence;	// 0x3159fbed
// declared property getter: - (BOOL)hasLatLng;	// 0x3159ef09
// declared property getter: - (BOOL)hasLocType;	// 0x3159fd49
// declared property getter: - (BOOL)hasLocationString;	// 0x3159f079
// declared property getter: - (BOOL)hasMisc;	// 0x3159ef99
// declared property getter: - (BOOL)hasObsolete;	// 0x3159fc85
// declared property getter: - (BOOL)hasSource;	// 0x3159ef21
// declared property getter: - (id)latLng;	// 0x3159fb55
// declared property getter: - (int)locType;	// 0x3159fd69
// declared property getter: - (id)locationString;	// 0x3159fce9
// declared property getter: - (id)misc;	// 0x3159fc51
// declared property getter: - (BOOL)obsolete;	// 0x3159fca5
- (BOOL)readFrom:(id)from;	// 0x3159f3f9
// declared property setter: - (void)setAccuracy:(int)accuracy;	// 0x3159ef39
// declared property setter: - (void)setAddress:(id)address;	// 0x3159fc2d
// declared property setter: - (void)setConfidence:(int)confidence;	// 0x3159ef5d
// declared property setter: - (void)setFeatures:(id)features;	// 0x3159fcc5
// declared property setter: - (void)setHasAccuracy:(BOOL)accuracy;	// 0x3159fbcd
// declared property setter: - (void)setHasConfidence:(BOOL)confidence;	// 0x3159fbfd
// declared property setter: - (void)setHasLocType:(BOOL)type;	// 0x3159fd59
// declared property setter: - (void)setHasObsolete:(BOOL)obsolete;	// 0x3159fc95
// declared property setter: - (void)setLatLng:(id)lng;	// 0x3159fb65
// declared property setter: - (void)setLocType:(int)type;	// 0x3159f091
// declared property setter: - (void)setLocationString:(id)string;	// 0x3159fcf9
// declared property setter: - (void)setMisc:(id)misc;	// 0x3159fc61
// declared property setter: - (void)setObsolete:(BOOL)obsolete;	// 0x3159efb1
// declared property setter: - (void)setSource:(id)source;	// 0x3159fb99
// declared property setter: - (void)setTimestamp:(long long)timestamp;	// 0x3159fd35
// declared property getter: - (id)source;	// 0x3159fb89
// declared property getter: - (long long)timestamp;	// 0x3159fd1d
- (void)writeTo:(id)to;	// 0x3159f7c9
@end

