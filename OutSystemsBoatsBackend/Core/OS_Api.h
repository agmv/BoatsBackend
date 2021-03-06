#import <Foundation/Foundation.h>
#import "OS_Object.h"
#import "OS_ApiClient.h"

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


@protocol OS_Api <NSObject>

@property(nonatomic, assign) OS_ApiClient *apiClient;

-(id) initWithApiClient:(OS_ApiClient *)apiClient;

-(void) addHeader:(NSString*)value forKey:(NSString*)key DEPRECATED_MSG_ATTRIBUTE("setDefaultHeaderValue:forKey:");

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key;
-(NSString*) defaultHeaderForKey:(NSString*)key;

-(NSUInteger) requestQueueSize;

@end
