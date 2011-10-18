/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGLatLng, NSString, NSMutableArray;

@interface LBSGLocation : PBCodable {
	LBSGLatLng *_latLng;	// 4 = 0x4
	NSString *_source;	// 8 = 0x8
	BOOL _hasAccuracy;	// 12 = 0xc
	int _accuracy;	// 16 = 0x10
	BOOL _hasConfidence;	// 20 = 0x14
	int _confidence;	// 24 = 0x18
	NSMutableArray *_features;	// 28 = 0x1c
	BOOL _hasTimestamp;	// 32 = 0x20
	long long _timestamp;	// 36 = 0x24
	BOOL _hasObsolete;	// 44 = 0x2c
	BOOL _obsolete;	// 45 = 0x2d
	BOOL _hasLocType;	// 46 = 0x2e
	int _locType;	// 48 = 0x30
	NSString *_misc;	// 52 = 0x34
	BOOL _hasAltitude;	// 56 = 0x38
	int _altitude;	// 60 = 0x3c
	BOOL _hasVerticalAccuracy;	// 64 = 0x40
	int _verticalAccuracy;	// 68 = 0x44
	BOOL _hasVelocity;	// 72 = 0x48
	int _velocity;	// 76 = 0x4c
	BOOL _hasHeading;	// 80 = 0x50
	int _heading;	// 84 = 0x54
	NSString *_locationString;	// 88 = 0x58
}
@property(assign, nonatomic) int accuracy;	// G=0x30b7898d; S=0x30b77acd; @synthesize=_accuracy
@property(assign, nonatomic) int altitude;	// G=0x30b78aed; S=0x30b77c45; @synthesize=_altitude
@property(assign, nonatomic) int confidence;	// G=0x30b789bd; S=0x30b77af1; @synthesize=_confidence
@property(retain, nonatomic) NSMutableArray *features;	// G=0x30b789cd; S=0x30b789dd; @synthesize=_features
@property(assign, nonatomic) BOOL hasAccuracy;	// G=0x30b7896d; S=0x30b7897d; @synthesize=_hasAccuracy
@property(assign, nonatomic) BOOL hasAltitude;	// G=0x30b78acd; S=0x30b78add; @synthesize=_hasAltitude
@property(assign, nonatomic) BOOL hasConfidence;	// G=0x30b7899d; S=0x30b789ad; @synthesize=_hasConfidence
@property(assign, nonatomic) BOOL hasHeading;	// G=0x30b78b5d; S=0x30b78b6d; @synthesize=_hasHeading
@property(readonly, assign, nonatomic) BOOL hasLatLng;	// G=0x30b77a9d; 
@property(assign, nonatomic) BOOL hasLocType;	// G=0x30b78a69; S=0x30b78a79; @synthesize=_hasLocType
@property(readonly, assign, nonatomic) BOOL hasLocationString;	// G=0x30b77cd5; 
@property(readonly, assign, nonatomic) BOOL hasMisc;	// G=0x30b77c2d; 
@property(assign, nonatomic) BOOL hasObsolete;	// G=0x30b78a39; S=0x30b78a49; @synthesize=_hasObsolete
@property(readonly, assign, nonatomic) BOOL hasSource;	// G=0x30b77ab5; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x30b78a01; S=0x30b78a11; @synthesize=_hasTimestamp
@property(assign, nonatomic) BOOL hasVelocity;	// G=0x30b78b2d; S=0x30b78b3d; @synthesize=_hasVelocity
@property(assign, nonatomic) BOOL hasVerticalAccuracy;	// G=0x30b78afd; S=0x30b78b0d; @synthesize=_hasVerticalAccuracy
@property(assign, nonatomic) int heading;	// G=0x30b78b7d; S=0x30b77cb1; @synthesize=_heading
@property(retain, nonatomic) LBSGLatLng *latLng;	// G=0x30b78905; S=0x30b78915; @synthesize=_latLng
@property(assign, nonatomic) int locType;	// G=0x30b78a89; S=0x30b77c09; @synthesize=_locType
@property(retain, nonatomic) NSString *locationString;	// G=0x30b78b8d; S=0x30b78b9d; @synthesize=_locationString
@property(retain, nonatomic) NSString *misc;	// G=0x30b78a99; S=0x30b78aa9; @synthesize=_misc
@property(assign, nonatomic) BOOL obsolete;	// G=0x30b78a59; S=0x30b77be5; @synthesize=_obsolete
@property(retain, nonatomic) NSString *source;	// G=0x30b78939; S=0x30b78949; @synthesize=_source
@property(assign, nonatomic) long long timestamp;	// G=0x30b78a21; S=0x30b77bb9; @synthesize=_timestamp
@property(assign, nonatomic) int velocity;	// G=0x30b78b4d; S=0x30b77c8d; @synthesize=_velocity
@property(assign, nonatomic) int verticalAccuracy;	// G=0x30b78b1d; S=0x30b77c69; @synthesize=_verticalAccuracy
// declared property getter: - (int)accuracy;	// 0x30b7898d
- (void)addFeature:(id)feature;	// 0x30b77b15
// declared property getter: - (int)altitude;	// 0x30b78aed
// declared property getter: - (int)confidence;	// 0x30b789bd
- (void)dealloc;	// 0x30b77a09
- (id)description;	// 0x30b77ced
- (id)dictionaryRepresentation;	// 0x30b77d5d
- (id)featureAtIndex:(unsigned)index;	// 0x30b77b99
// declared property getter: - (id)features;	// 0x30b789cd
- (unsigned)featuresCount;	// 0x30b77b79
// declared property getter: - (BOOL)hasAccuracy;	// 0x30b7896d
// declared property getter: - (BOOL)hasAltitude;	// 0x30b78acd
// declared property getter: - (BOOL)hasConfidence;	// 0x30b7899d
// declared property getter: - (BOOL)hasHeading;	// 0x30b78b5d
// declared property getter: - (BOOL)hasLatLng;	// 0x30b77a9d
// declared property getter: - (BOOL)hasLocType;	// 0x30b78a69
// declared property getter: - (BOOL)hasLocationString;	// 0x30b77cd5
// declared property getter: - (BOOL)hasMisc;	// 0x30b77c2d
// declared property getter: - (BOOL)hasObsolete;	// 0x30b78a39
// declared property getter: - (BOOL)hasSource;	// 0x30b77ab5
// declared property getter: - (BOOL)hasTimestamp;	// 0x30b78a01
// declared property getter: - (BOOL)hasVelocity;	// 0x30b78b2d
// declared property getter: - (BOOL)hasVerticalAccuracy;	// 0x30b78afd
// declared property getter: - (int)heading;	// 0x30b78b7d
// declared property getter: - (id)latLng;	// 0x30b78905
// declared property getter: - (int)locType;	// 0x30b78a89
// declared property getter: - (id)locationString;	// 0x30b78b8d
// declared property getter: - (id)misc;	// 0x30b78a99
// declared property getter: - (BOOL)obsolete;	// 0x30b78a59
- (BOOL)readFrom:(id)from;	// 0x30b7817d
// declared property setter: - (void)setAccuracy:(int)accuracy;	// 0x30b77acd
// declared property setter: - (void)setAltitude:(int)altitude;	// 0x30b77c45
// declared property setter: - (void)setConfidence:(int)confidence;	// 0x30b77af1
// declared property setter: - (void)setFeatures:(id)features;	// 0x30b789dd
// declared property setter: - (void)setHasAccuracy:(BOOL)accuracy;	// 0x30b7897d
// declared property setter: - (void)setHasAltitude:(BOOL)altitude;	// 0x30b78add
// declared property setter: - (void)setHasConfidence:(BOOL)confidence;	// 0x30b789ad
// declared property setter: - (void)setHasHeading:(BOOL)heading;	// 0x30b78b6d
// declared property setter: - (void)setHasLocType:(BOOL)type;	// 0x30b78a79
// declared property setter: - (void)setHasObsolete:(BOOL)obsolete;	// 0x30b78a49
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x30b78a11
// declared property setter: - (void)setHasVelocity:(BOOL)velocity;	// 0x30b78b3d
// declared property setter: - (void)setHasVerticalAccuracy:(BOOL)accuracy;	// 0x30b78b0d
// declared property setter: - (void)setHeading:(int)heading;	// 0x30b77cb1
// declared property setter: - (void)setLatLng:(id)lng;	// 0x30b78915
// declared property setter: - (void)setLocType:(int)type;	// 0x30b77c09
// declared property setter: - (void)setLocationString:(id)string;	// 0x30b78b9d
// declared property setter: - (void)setMisc:(id)misc;	// 0x30b78aa9
// declared property setter: - (void)setObsolete:(BOOL)obsolete;	// 0x30b77be5
// declared property setter: - (void)setSource:(id)source;	// 0x30b78949
// declared property setter: - (void)setTimestamp:(long long)timestamp;	// 0x30b77bb9
// declared property setter: - (void)setVelocity:(int)velocity;	// 0x30b77c8d
// declared property setter: - (void)setVerticalAccuracy:(int)accuracy;	// 0x30b77c69
// declared property getter: - (id)source;	// 0x30b78939
// declared property getter: - (long long)timestamp;	// 0x30b78a21
// declared property getter: - (int)velocity;	// 0x30b78b4d
// declared property getter: - (int)verticalAccuracy;	// 0x30b78b1d
- (void)writeTo:(id)to;	// 0x30b7852d
@end

