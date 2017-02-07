#import <Foundation/Foundation.h>
#import "OS_BoatBoatImageRecord.h"
#import "OS_BoatBoatImagesRecord.h"
#import "OS_Api.h"

/**
* Boats
* ## Authentication  Basic Authentication is required for all requests.
*
* OpenAPI spec version: 1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface OS_BoatsApi: NSObject <OS_Api>

extern NSString* kOS_BoatsApiErrorDomain;
extern NSInteger kOS_BoatsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// 
/// 
///
///  code:200 message:""
/// @return NSArray<OS_BoatBoatImageRecord>*
-(NSNumber*) getAllWithCompletionHandler: 
    (void (^)(NSArray<OS_BoatBoatImageRecord>* output, NSError* error)) handler;

/// 
/// 
///
/// @param boatId 
///  code:200 message:""
/// @return OS_BoatBoatImagesRecord*
-(NSNumber*) getBoatDetailWithBoatId: (NSNumber*) boatId
    completionHandler: (void (^)(OS_BoatBoatImagesRecord* output, NSError* error)) handler;


@end