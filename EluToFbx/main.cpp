#include <iostream>

#include <fbxsdk.h>
#include <fbxsdk/fileio/fbxiosettingspath.h>

int main()
{
	FbxManager* globalManager = FbxManager::Create();

	//~ for reference
	/*
	FbxIOSettings* ioSettings = FbxIOSettings::Create(globalManager, IOSROOT);
	globalManager->SetIOSettings(ioSettings);

	FbxScene* mainScene = FbxScene::Create(globalManager, "elu_scene_filename");
	FbxNode* rootNode = mainScene->GetRootNode();

	FbxNode* childNode = FbxNode::Create(mainScene, "child");
	rootNode->AddChild(childNode);

	FbxNode* meshNode = FbxNode::Create(mainScene, "meshnode");
	FbxMesh* mainMesh = FbxMesh::Create(mainScene, "mesh");

	meshNode->SetNodeAttribute(mainMesh);
	FbxNode* rootNode = mainScene->GetRootNode();
	*/


}
