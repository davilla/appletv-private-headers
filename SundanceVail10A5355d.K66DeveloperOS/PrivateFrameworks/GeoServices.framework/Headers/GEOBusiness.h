/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString, GEOLatLng;

@interface GEOBusiness : PBCodable {
	unsigned long long _uID;	// 4 = 0x4
	NSMutableArray *_attributeKeyValues;	// 12 = 0xc
	NSMutableArray *_categorys;	// 16 = 0x10
	GEOLatLng *_center;	// 20 = 0x14
	NSMutableArray *_localizedCategories;	// 24 = 0x18
	NSString *_mapsURL;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSString *_notice;	// 36 = 0x24
	NSMutableArray *_openHours;	// 40 = 0x28
	NSString *_phoneticName;	// 44 = 0x2c
	NSString *_phoneticNotice;	// 48 = 0x30
	NSMutableArray *_photos;	// 52 = 0x34
	NSMutableArray *_ratings;	// 56 = 0x38
	NSMutableArray *_sources;	// 60 = 0x3c
	NSMutableArray *_starRatings;	// 64 = 0x40
	NSString *_telephone;	// 68 = 0x44
	unsigned _totalNumberOfPhotos;	// 72 = 0x48
	NSString *_uRL;	// 76 = 0x4c
	int _version;	// 80 = 0x50
	BOOL _isClosed;	// 84 = 0x54
	BOOL _isUnverified;	// 85 = 0x55
	struct {
		unsigned uID : 1;
		unsigned totalNumberOfPhotos : 1;
		unsigned version : 1;
		unsigned isClosed : 1;
		unsigned isUnverified : 1;
	} _has;	// 86 = 0x56
}
@property(retain, nonatomic) NSMutableArray *attributeKeyValues;	// G=0x34523f7d; S=0x34523f8d; @synthesize=_attributeKeyValues
@property(retain, nonatomic) NSMutableArray *categorys;	// G=0x34523f3d; S=0x34523f4d; @synthesize=_categorys
@property(retain, nonatomic) GEOLatLng *center;	// G=0x34523fbd; S=0x34523fcd; @synthesize=_center
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x34520f25; 
@property(assign, nonatomic) BOOL hasIsClosed;	// G=0x34520afd; S=0x34520add; 
@property(assign, nonatomic) BOOL hasIsUnverified;	// G=0x34520aa1; S=0x34520a81; 
@property(readonly, assign, nonatomic) BOOL hasMapsURL;	// G=0x34520b11; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x345209c9; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x345209e1; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x345209f9; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticNotice;	// G=0x34520a11; 
@property(readonly, assign, nonatomic) BOOL hasTelephone;	// G=0x34520a29; 
@property(assign, nonatomic) BOOL hasTotalNumberOfPhotos;	// G=0x34520f85; S=0x34520f65; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x34520959; S=0x3452093d; 
@property(readonly, assign, nonatomic) BOOL hasURL;	// G=0x34520a41; 
@property(assign, nonatomic) BOOL hasVersion;	// G=0x345209b5; S=0x34520995; 
@property(assign, nonatomic) BOOL isClosed;	// G=0x34523eed; S=0x34520ab5; @synthesize=_isClosed
@property(assign, nonatomic) BOOL isUnverified;	// G=0x34523edd; S=0x34520a59; @synthesize=_isUnverified
@property(retain, nonatomic) NSMutableArray *localizedCategories;	// G=0x34523fed; S=0x34523ffd; @synthesize=_localizedCategories
@property(retain, nonatomic) NSString *mapsURL;	// G=0x34523efd; S=0x34523f0d; @synthesize=_mapsURL
@property(retain, nonatomic) NSString *name;	// G=0x34523e1d; S=0x34523e2d; @synthesize=_name
@property(retain, nonatomic) NSString *notice;	// G=0x34523e3d; S=0x34523e4d; @synthesize=_notice
@property(retain, nonatomic) NSMutableArray *openHours;	// G=0x34523f9d; S=0x34523fad; @synthesize=_openHours
@property(retain, nonatomic) NSString *phoneticName;	// G=0x34523e5d; S=0x34523e6d; @synthesize=_phoneticName
@property(retain, nonatomic) NSString *phoneticNotice;	// G=0x34523e7d; S=0x34523e8d; @synthesize=_phoneticNotice
@property(retain, nonatomic) NSMutableArray *photos;	// G=0x34523f5d; S=0x34523f6d; @synthesize=_photos
@property(retain, nonatomic) NSMutableArray *ratings;	// G=0x34523f1d; S=0x34523f2d; @synthesize=_ratings
@property(retain, nonatomic) NSMutableArray *sources;	// G=0x3452400d; S=0x3452401d; @synthesize=_sources
@property(retain, nonatomic) NSMutableArray *starRatings;	// G=0x3452402d; S=0x3452403d; @synthesize=_starRatings
@property(retain, nonatomic) NSString *telephone;	// G=0x34523e9d; S=0x34523ead; @synthesize=_telephone
@property(assign, nonatomic) unsigned totalNumberOfPhotos;	// G=0x34523fdd; S=0x34520f3d; @synthesize=_totalNumberOfPhotos
@property(assign, nonatomic) unsigned long long uID;	// G=0x34523df5; S=0x34520909; @synthesize=_uID
@property(retain, nonatomic) NSString *uRL;	// G=0x34523ebd; S=0x34523ecd; @synthesize=_uRL
@property(assign, nonatomic) int version;	// G=0x34523e0d; S=0x3452096d; @synthesize=_version
- (void)addAttributeKeyValue:(id)value;	// 0x34520dad
- (void)addCategory:(id)category;	// 0x34520c15
- (void)addLocalizedCategories:(id)categories;	// 0x34520fb9
- (void)addOpenHours:(id)hours;	// 0x34520e79
- (void)addPhoto:(id)photo;	// 0x34520ce1
- (void)addRating:(id)rating;	// 0x34520b49
- (void)addSource:(id)source;	// 0x34521085
- (void)addStarRating:(id)rating;	// 0x34521151
- (id)attributeKeyValueAtIndex:(unsigned)index;	// 0x34520e39
// declared property getter: - (id)attributeKeyValues;	// 0x34523f7d
- (unsigned)attributeKeyValuesCount;	// 0x34520e19
- (id)categoryAtIndex:(unsigned)index;	// 0x34520ca1
// declared property getter: - (id)categorys;	// 0x34523f3d
- (unsigned)categorysCount;	// 0x34520c81
// declared property getter: - (id)center;	// 0x34523fbd
- (void)clearAttributeKeyValues;	// 0x34520d8d
- (void)clearCategorys;	// 0x34520bf5
- (void)clearLocalizedCategories;	// 0x34520f99
- (void)clearOpenHours;	// 0x34520e59
- (void)clearPhotos;	// 0x34520cc1
- (void)clearRatings;	// 0x34520b29
- (void)clearSources;	// 0x34521065
- (void)clearStarRatings;	// 0x34521131
- (void)copyTo:(id)to;	// 0x34522ffd
- (void)dealloc;	// 0x34520799
- (id)description;	// 0x345211fd
- (id)dictionaryRepresentation;	// 0x3452126d
// declared property getter: - (BOOL)hasCenter;	// 0x34520f25
// declared property getter: - (BOOL)hasIsClosed;	// 0x34520afd
// declared property getter: - (BOOL)hasIsUnverified;	// 0x34520aa1
// declared property getter: - (BOOL)hasMapsURL;	// 0x34520b11
// declared property getter: - (BOOL)hasName;	// 0x345209c9
// declared property getter: - (BOOL)hasNotice;	// 0x345209e1
// declared property getter: - (BOOL)hasPhoneticName;	// 0x345209f9
// declared property getter: - (BOOL)hasPhoneticNotice;	// 0x34520a11
// declared property getter: - (BOOL)hasTelephone;	// 0x34520a29
// declared property getter: - (BOOL)hasTotalNumberOfPhotos;	// 0x34520f85
// declared property getter: - (BOOL)hasUID;	// 0x34520959
// declared property getter: - (BOOL)hasURL;	// 0x34520a41
// declared property getter: - (BOOL)hasVersion;	// 0x345209b5
- (unsigned)hash;	// 0x34523b2d
// declared property getter: - (BOOL)isClosed;	// 0x34523eed
- (BOOL)isEqual:(id)equal;	// 0x34523699
// declared property getter: - (BOOL)isUnverified;	// 0x34523edd
// declared property getter: - (id)localizedCategories;	// 0x34523fed
- (id)localizedCategoriesAtIndex:(unsigned)index;	// 0x34521045
- (unsigned)localizedCategoriesCount;	// 0x34521025
// declared property getter: - (id)mapsURL;	// 0x34523efd
// declared property getter: - (id)name;	// 0x34523e1d
// declared property getter: - (id)notice;	// 0x34523e3d
// declared property getter: - (id)openHours;	// 0x34523f9d
- (id)openHoursAtIndex:(unsigned)index;	// 0x34520f05
- (unsigned)openHoursCount;	// 0x34520ee5
// declared property getter: - (id)phoneticName;	// 0x34523e5d
// declared property getter: - (id)phoneticNotice;	// 0x34523e7d
- (id)photoAtIndex:(unsigned)index;	// 0x34520d6d
// declared property getter: - (id)photos;	// 0x34523f5d
- (unsigned)photosCount;	// 0x34520d4d
- (id)ratingAtIndex:(unsigned)index;	// 0x34520bd5
// declared property getter: - (id)ratings;	// 0x34523f1d
- (unsigned)ratingsCount;	// 0x34520bb5
- (BOOL)readFrom:(id)from;	// 0x34522605
// declared property setter: - (void)setAttributeKeyValues:(id)values;	// 0x34523f8d
// declared property setter: - (void)setCategorys:(id)categorys;	// 0x34523f4d
// declared property setter: - (void)setCenter:(id)center;	// 0x34523fcd
// declared property setter: - (void)setHasIsClosed:(BOOL)closed;	// 0x34520add
// declared property setter: - (void)setHasIsUnverified:(BOOL)unverified;	// 0x34520a81
// declared property setter: - (void)setHasTotalNumberOfPhotos:(BOOL)photos;	// 0x34520f65
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x3452093d
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x34520995
// declared property setter: - (void)setIsClosed:(BOOL)closed;	// 0x34520ab5
// declared property setter: - (void)setIsUnverified:(BOOL)unverified;	// 0x34520a59
// declared property setter: - (void)setLocalizedCategories:(id)categories;	// 0x34523ffd
// declared property setter: - (void)setMapsURL:(id)url;	// 0x34523f0d
// declared property setter: - (void)setName:(id)name;	// 0x34523e2d
// declared property setter: - (void)setNotice:(id)notice;	// 0x34523e4d
// declared property setter: - (void)setOpenHours:(id)hours;	// 0x34523fad
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x34523e6d
// declared property setter: - (void)setPhoneticNotice:(id)notice;	// 0x34523e8d
// declared property setter: - (void)setPhotos:(id)photos;	// 0x34523f6d
// declared property setter: - (void)setRatings:(id)ratings;	// 0x34523f2d
// declared property setter: - (void)setSources:(id)sources;	// 0x3452401d
// declared property setter: - (void)setStarRatings:(id)ratings;	// 0x3452403d
// declared property setter: - (void)setTelephone:(id)telephone;	// 0x34523ead
// declared property setter: - (void)setTotalNumberOfPhotos:(unsigned)photos;	// 0x34520f3d
// declared property setter: - (void)setUID:(unsigned long long)uid;	// 0x34520909
// declared property setter: - (void)setURL:(id)url;	// 0x34523ecd
// declared property setter: - (void)setVersion:(int)version;	// 0x3452096d
- (id)sourceAtIndex:(unsigned)index;	// 0x34521111
// declared property getter: - (id)sources;	// 0x3452400d
- (unsigned)sourcesCount;	// 0x345210f1
- (id)starRatingAtIndex:(unsigned)index;	// 0x345211dd
// declared property getter: - (id)starRatings;	// 0x3452402d
- (unsigned)starRatingsCount;	// 0x345211bd
// declared property getter: - (id)telephone;	// 0x34523e9d
// declared property getter: - (unsigned)totalNumberOfPhotos;	// 0x34523fdd
// declared property getter: - (unsigned long long)uID;	// 0x34523df5
// declared property getter: - (id)uRL;	// 0x34523ebd
// declared property getter: - (int)version;	// 0x34523e0d
- (void)writeTo:(id)to;	// 0x34522611
@end

